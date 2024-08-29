/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <aulyanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:45:12 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/29 20:28:53 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	ft_ultimate_range(int **range, int min, int max);
// int	main(void)
// {
// 	int	*range;
// 	int	size;
// 	int	min = 3;
// 	int	max = 8;
// 	int	i;

// 	size = ft_ultimate_range(&range, min, max);
// 	if (size == -1)
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// 	else if (size == 0)
// 	{
// 		printf("Invalid range: min is greater than or equal to max.\n");
// 	}
// 	else
// 	{
// 		printf("Size of range: %d\n", size);
// 		printf("Range: ");
// 		for (i = 0; i < size; i++)
// 		{
// 			printf("%d ", range[i]);
// 		}
// 		printf("\n");
// 		free(range);
// 	}
// 	return (0);
// }
