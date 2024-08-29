/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <aulyanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:51:56 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/26 13:20:13 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fc;

	if (nb < 0)
		return (0);
	fc = 1;
	while (nb > 0)
	{
		fc *= nb;
		nb --;
	}
	return (fc);
}

// #include <stdio.h>
// int ft_iterative_factorial(int nb);
// int main(void)
// {
// 	int exmpl;

// 	exmpl = 7;
// 	printf("Factorial of %d is %d\n", exmpl, ft_iterative_factorial(exmpl));
// 	return (0);
// }
