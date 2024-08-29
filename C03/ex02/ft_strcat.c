/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 23:24:32 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/20 23:24:34 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*new_dest;

	new_dest = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest ++;
		src++;
	}
	*dest = '\0';
	return (new_dest);
}

// #include <stdio.h>
// char    *ft_strcat(char *dest, char *src);
// int main(void)
// {
// 	char    dest[50] = "Heyyyyy, ";
// 	char    src[] = "bruh";

// 	printf("%s\n", dest);
// 	ft_strcat(dest, src);
// 	printf("%s\n", dest);

// 	return (0);
// }
