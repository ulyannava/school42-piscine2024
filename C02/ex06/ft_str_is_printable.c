/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:45:50 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/18 17:45:53 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int ft_str_is_printable(char *str);
// int main(void)
// {
// 	char str1[] = "Hello BruH";
// 	char str2[] = "Hello\nBruh";
// 	char str3[] = "";

// 	printf("str1: %d\n", ft_str_is_printable(str1));
// 	printf("str2: %d\n", ft_str_is_printable(str2));
// 	printf("str3: %d\n", ft_str_is_printable(str3));

// 	return (0);
// }
