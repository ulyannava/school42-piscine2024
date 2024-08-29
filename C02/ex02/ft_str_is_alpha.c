/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:37:10 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/18 17:37:13 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z')
			&& !(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int ft_str_is_alpha(char *str);
// int main(void)
// {
//     char str1[] = "Hello";
//     char str2[] = "Hello123";
//     char str3[] = "";

//     printf("%d\n", ft_str_is_alpha(str1));
//     printf("%d\n", ft_str_is_alpha(str2));
//     printf("%d\n", ft_str_is_alpha(str3));

//     return (0);
// }
