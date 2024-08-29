/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:45:03 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/18 17:45:10 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int ft_str_is_uppercase(char *str);
// int main(void)
// {
//     char str1[] = "HELLO";
//     char str2[] = "Hello";
//     char str3[] = "";

//     printf("%d\n", ft_str_is_uppercase(str1));
//     printf("%d\n", ft_str_is_uppercase(str2));
//     printf("%d\n", ft_str_is_uppercase(str3));

//     return (0);
// }
