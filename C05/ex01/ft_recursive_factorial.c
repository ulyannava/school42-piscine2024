/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <aulyanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:52:54 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/26 16:35:44 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial (nb - 1));
}

// #include <stdio.h>
// int	ft_recursive_factorial(int nb);
// int main(void)
// {
// 	int exmpl;
// 	exmpl = 7;
// 	printf("Rec fac of %d is %d\n", exmpl, ft_recursive_factorial(exmpl));
// 	return (0);
// }
