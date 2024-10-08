/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <aulyanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 23:29:13 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/26 19:18:58 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *q, int *w)
{
	int	c;

	c = *q;
	*q = *w;
	*w = c;
}

// #include <stdio.h>
// int main(void)
// {
// 	int q = 5;
// 	int w = 7;

// 	ft_swap(&q, &w);

// 	printf("%d\n", q);
// 	printf("%d\n", w);
// 	return(0);
// }
