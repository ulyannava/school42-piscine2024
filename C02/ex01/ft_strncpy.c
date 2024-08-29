/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:35:53 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/18 17:35:56 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
// 	char    src[] = "Heyyyyy";
// 	char    dest[10];
// 	ft_strncpy(dest, src, 5);
// 	printf("%s\n", dest);

// 	ft_strncpy(dest, src, 10);
// 	printf("%s\n", dest);
// 	return(0);
// }
