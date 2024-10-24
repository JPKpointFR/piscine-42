/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:04:01 by adcisse           #+#    #+#             */
/*   Updated: 2024/08/12 16:04:06 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
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
			if ((*str >= 'a' && *str <= 'z'))
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
// 	char b[] = "dfghj";
// 	int i;
// 	i = ft_str_is_lowercase(b);
// 	char c = i + '0';
// 	write(1, &c, 1);
// 	return (0);
// }
