/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <aulyanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:34:51 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/26 19:16:00 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// int	main(void)
// {
//     int a = 15;
//     int b = 5;
//     int div;
//     int mod;
//     ft_div_mod(a, b, &div, &mod);
//     printf("%d\n", div);
//     printf("%d\n", mod);
//     return(0);
// }