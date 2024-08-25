/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <aulyanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 23:54:31 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/25 14:56:28 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	comb[10];
	int		i;

	if (n < 1 || n > 9)
		return ;
	i = -1;
	while (++i < n)
		comb[i] = '0' + i;
	while (1)
	{
		write(1, comb, n);
		if (comb[0] == '9' - n + 1)
			break ;
		write(1, ", ", 2);
		i = n;
		while (--i >= 0 && comb[i] == '9' - (n - 1 - i))
			;
		comb[i]++;
		while (++i < n)
			comb[i] = comb[i - 1] + 1;
	}
}

// int	main(void)
// {
// 	ft_print_combn(2);
// 	write(1, "\n", 1);
// 	ft_print_combn(3);
// 	write(1, "\n", 1);
// 	ft_print_combn(4);
// 	write(1, "\n", 1);
// 	return (0);
// }
