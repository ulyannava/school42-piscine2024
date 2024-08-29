/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <aulyanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 20:25:27 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/26 19:19:49 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	new;

	i = 0;
	while (i < size / 2)
	{
		new = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = new;
		i++;
	}
}

// #include <stdio.h>

// int main(void)
// {
//     int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int size = sizeof(tab) / sizeof(tab[0]);

//     printf("Before: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", tab[i]);
//     }
//     printf("\n");

//     ft_rev_int_tab(tab, size);

//     printf("After: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", tab[i]);
//     }
//     printf("\n");
//     return (0);
// }
