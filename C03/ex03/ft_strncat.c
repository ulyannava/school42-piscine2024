/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 23:25:45 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/20 23:25:48 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*new_dest;

	new_dest = dest;
	while (*dest)
		dest++;
	while (*src && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (new_dest);
}

// #include <stdio.h>
// char *ft_strncat(char *dest, char *src, unsigned int nb);
// int main(void)
// {
//     char dest[50] = "";
//     char src[] = "";
// }
