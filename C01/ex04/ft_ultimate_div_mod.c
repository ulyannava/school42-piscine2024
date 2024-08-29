/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <aulyanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 02:57:35 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/26 19:16:08 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tem;

	if (*b != 0)
	{
		tem = *a / *b;
		*b = *a % *b;
		*a = tem;
	}
}

// int main(void)
// {
//     int a = 27;
//     int b = 3;
//     ft_ultimate_div_mod(&a, &b);
//     printf("%d\n", a);
//     printf("%d\n", b);
//     return(0);
// }
