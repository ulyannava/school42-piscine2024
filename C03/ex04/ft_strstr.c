/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <aulyanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:12:55 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/28 23:59:45 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s1;
	char	*s2;

	if (!*to_find)
		return (str);
	while (*str)
	{
		s1 = str;
		s2 = to_find;
		while (*s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (!*s2)
			return (str);
		str++;
	}
	return (0);
}

// #include <stdio.h>
// char	*ft_strstr(char *str, char *to_find);
// int	main(void)
// {
//     char str[] = "I like to eat croissants";
//     printf("1: %s\n", ft_strstr(str, "eat"));
//     printf("2: %s\n", ft_strstr(str, "I like"));
//     printf("3: %s\n", ft_strstr(str, "croissants"));
//     printf("4: %s\n", ft_strstr(str, "baguette"));
//     printf("5: %s\n", ft_strstr(str, ""));
//     return (0);
// }
