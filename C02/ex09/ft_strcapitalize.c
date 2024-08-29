/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulyanov <aulyanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:00:07 by aulyanov          #+#    #+#             */
/*   Updated: 2024/08/28 21:16:24 by aulyanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	while (str[i] != '\0')
	{
		if (cap && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
		else if (!cap && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
		if ((str[i] < 'a' || str[i] > 'z')
			&& (str[i] < 'A' || str[i] > 'Z')
			&& (str[i] < '0' || str[i] > '9'))
			cap = 1;
		else
			cap = 0;
		i++;
	}
	return (str);
}
