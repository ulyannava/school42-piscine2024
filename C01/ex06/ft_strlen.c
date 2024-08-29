/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <aulyanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:17:41 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/24 20:24:00 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

// #include <stdio.h>
// int ft_strlen(char *str);
// int main(void)
// {
// 	char string[] = "I am tired";
// 	int len;

// 	len = ft_strlen(string);
// 	printf("%d\n", len);
// 	return (0);
// }
