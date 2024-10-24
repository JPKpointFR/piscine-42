/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:03:40 by adcisse           #+#    #+#             */
/*   Updated: 2024/08/12 16:03:49 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
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
			if (*str >= '0' && *str <= '9')
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
// 	char	b[] = "\n";
// 	int	i;

// 	i = ft_str_is_numeric(b);
// 	i+='0';

// 	write(1, &i, 1);
// 	return (0);
// }
