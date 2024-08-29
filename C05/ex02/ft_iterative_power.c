/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <aulyanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:53:30 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/26 14:01:52 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	r = 1;
	while (power > 0)
	{
		r *= nb;
		power--;
	}
	return (r);
}

// #include <stdio.h>
// int ft_iterative_power(int nb, int power);
// int main(void)
// {
// 	int b;
// 	int exp;

// 	b = 5;
// 	exp = 0;
// 	printf("%d to the power od %d is %d\n", b, exp, ft_iterative_power(b, exp));
// 	return (0);
// }
