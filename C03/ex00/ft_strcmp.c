/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 23:13:42 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/20 23:13:45 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}

// #include <stdio.h>
// int ft_strcmp(char *s1, char *s2);
// int main()
// {
//     char str1[] = "Heyyyyy";
//     char str2[] = "Heyyyyy";
//     printf("%d\n", ft_strcmp(str1, str2));

//     char str3[] = "Bruh";
//     char str4[] = "Bruuuh";
//     printf("%d\n", ft_strcmp(str3, str4));

//     return (0);
// }
