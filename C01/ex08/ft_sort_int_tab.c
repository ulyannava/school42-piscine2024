/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <aulyanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 20:42:58 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/24 22:31:59 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	new;
	int	i;
	int	a;

	i = 0;
	while (i < size)
	{
		a = i + 1;
		while (a < size)
		{
			if (tab[i] > tab[a])
			{
				new = tab[i];
				tab[i] = tab[a];
				tab[a] = new;
			}
			a++;
		}
		i++;
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	int tab[] = {9, 6, 7, 5, 8, 3, 4, 1, 2};
// 	int size = sizeof(tab) / sizeof(tab[0]);
// 	int i = 0;

// 	printf("Before: ");
// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");

// 	ft_sort_int_tab(tab, size);

// 	i = 0;
// 	printf("After: ");
// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");

// 	return 0;
// }
