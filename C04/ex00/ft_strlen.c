/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:46:10 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/21 15:46:13 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

// #include <stdio.h>

// int ft_strlen(char *str);
// int main(void)
// {
//     char str1[] = "";
//     char str2[] = "";
//     char str3[] = "";

//     printf("");
//     printf("");
//     printf("");

//     return (0);
// }
