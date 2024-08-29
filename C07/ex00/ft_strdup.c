/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <aulyanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:44:21 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/29 20:23:58 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dup;

	len = 0;
	while (src[len])
		len++;
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}

// #include <stdio.h>
// #include <stdlib.h>
// char	*ft_strdup(char *src);
// int	main(void)
// {
// 	char	*original = "Hello, 42!";
// 	char	*duplicate;

// 	duplicate = ft_strdup(original);
// 	if (duplicate)
// 	{
// 		printf("Original: %s\n", original);
// 		printf("Duplicate: %s\n", duplicate);
// 		free(duplicate);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed!\n");
// 	}
// 	return (0);
// }
