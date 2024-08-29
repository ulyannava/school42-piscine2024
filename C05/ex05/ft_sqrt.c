/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <aulyanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:56:49 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/26 16:06:25 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int ft_sqrt(int nb);
// int main(void) 
// {
// 	int a;
// 	a = 25;
// 	printf("Sqrt of %d is %d\n", a, ft_sqrt(a));
// 	return (0);
// }
