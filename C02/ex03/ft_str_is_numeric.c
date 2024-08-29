/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:43:01 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/18 17:43:03 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int ft_str_is_numeric(char *str);
// int main(void)
// {
//     char str1[] = "123456";
//     char str2[] = "1234a5";
//     char str3[] = "";

//     printf("%d\n", ft_str_is_numeric(str1));
//     printf("%d\n", ft_str_is_numeric(str2));
//     printf("%d\n", ft_str_is_numeric(str3));

//     return (0);
// }
