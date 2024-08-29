/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <aulyanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:54:16 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/26 15:37:42 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>
// int	ft_recursive_power(int nb, int power);
// int main(void)
// {
// 	int b;
// 	int exp;

// 	b = 3;
// 	exp = -2;
// 	printf("%d to the power of %d is %d\n", b, exp, ft_recursive_power(b, exp));
// 	return (0);
// }
