/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <aulyanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:44:50 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/29 20:27:03 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*range;
	int		i;

	if (min >= max)
		return (NULL);
	range = (int *)malloc((max - min) * sizeof(int));
	if (!range)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	*ft_range(int min, int max);
// int	main(void)
// {
// 	int	min = 5;
// 	int	max = 10;
// 	int	*range;
// 	int	size;
// 	int	i;

// 	range = ft_range(min, max);
// 	if (range)
// 	{
// 		size = max - min;
// 		printf("Range: ");
// 		for (i = 0; i < size; i++)
// 		{
// 			printf("%d ", range[i]);
// 		}
// 		printf("\n");
// 		free(range);
// 	}
// 	else
// 	{
// 		printf("Failed to allocate memory or invalid range.\n");
// 	}
// 	return (0);
// }
