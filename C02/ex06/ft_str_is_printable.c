/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:05:25 by adcisse           #+#    #+#             */
/*   Updated: 2024/08/12 16:05:30 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	t;

	if (str[0] == '\0')
		return (1);
	else
	{
		while (*str)
		{
			if ((*str >= 31 && *str <= 127))
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
// 	char b[] = "\a";
// 	int i;
// 	i = ft_str_is_printable(b);
// 	char c = i + '0';
// 	write(1, &c, 1);
// 	return (0);
// }
