/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <aulyanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:54:58 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/28 20:35:13 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	a;

	i = argc - 1;
	while (i > 0)
	{
		a = 0;
		while (argv[i][a] != '\0')
		{
			write(1, &argv[i][a], 1);
			a++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
