/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <aulyanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:00:32 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/28 20:15:23 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

// #include <stdio.h>
// unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
// int main(void)
// {
//     char src[] = "Hello, World!";
//     char dest[20];
//     unsigned int length = ft_strlcpy(dest, src, 10);
//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dest);
//     printf("Length of source: %u\n", length);
//     return (0);
// }
