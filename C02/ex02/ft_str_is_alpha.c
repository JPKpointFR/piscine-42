/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:03:17 by adcisse           #+#    #+#             */
/*   Updated: 2024/08/12 16:03:21 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	t;

	if (str[0] == '\n')
	{
		return (1);
	}
	else
	{
		while (*str)
		{
			if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
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
// 	char b[] = "#";
// 	int i;
// 	i = ft_str_is_alpha(b);
// 	char c = i + '0';
// 	write(1, &c, 1);
// 	return (0);
// }
