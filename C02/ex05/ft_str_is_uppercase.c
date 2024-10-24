/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:04:22 by adcisse           #+#    #+#             */
/*   Updated: 2024/08/12 16:04:25 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	t;

	if (str[0] == '\0')
	{
		return (1);
	}
	else
	{
		while (*str)
		{
			if ((*str >= 'A' && *str <= 'Z'))
				t = 1;
			else
			{
				return (0);
			}
			str++;
		}
		return (t);
	}
}

// int	main(void)
// {
// 	char b[] = "AAA";
// 	int i;
// 	i = ft_str_is_uppercase(b);
// 	char c = i + '0';
// 	write(1, &c, 1);
// 	return (0);
// }
