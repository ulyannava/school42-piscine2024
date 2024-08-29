/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:44:14 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/18 17:44:18 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int ft_str_is_lowercase(char *str);
// int main(void)
// {
//     char    str1[] = "hellO";
//     char    str2[] = "Hello";
//     char    str3[] = "";

//     printf("%d\n", ft_str_is_lowercase(str1));
//     printf("%d\n", ft_str_is_lowercase(str2));
//     printf("%d\n", ft_str_is_lowercase(str3));

//     return (0);
// }
