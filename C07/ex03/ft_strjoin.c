/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <aulyanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:45:32 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/29 20:15:48 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_c_t_len(int size, char **strs, char *sep)
{
	int	total_length;
	int	i;

	total_length = 0;
	i = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		if (i < size - 1)
			total_length += ft_strlen(sep);
		i++;
	}
	return (total_length);
}

void	ft_con_str(char *result, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	pos;

	pos = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[pos++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				result[pos++] = sep[j++];
		}
		i++;
	}
	result[pos] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_length;

	if (size == 0)
	{
		result = (char *)malloc(1);
		if (result)
			*result = '\0';
		return (result);
	}
	total_length = ft_c_t_len(size, strs, sep);
	result = (char *)malloc(total_length + 1);
	if (!result)
		return (NULL);
	ft_con_str(result, strs, sep, size);
	return (result);
}

// #include <stdio.h>
// #include <stdlib.h>
// char	*ft_strjoin(int size, char **strs, char *sep);
// int	main(void)
// {
// 	char	*strings[] = {"Hey", "bruh", "42"};
// 	char	*separator = ", ";
// 	char	*result;
// 	int		size = 3;

// 	result = ft_strjoin(size, strings, separator);
// 	if (result)
// 	{
// 		printf("Result: %s\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed!\n");
// 	}
// 	return (0);
// }
