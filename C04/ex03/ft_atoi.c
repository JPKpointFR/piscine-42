/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-16 08:00:30 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-16 08:00:30 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	r_atoi(char *str, int atoi, int count_pn, int count_pos)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			while (*str >= '0' && *str <= '9')
			{
				atoi = atoi * 10 + (*str - '0');
				str++;
			}
			if (count_pn % 2 != 0)
				return (atoi * -1);
			return (atoi);
		}
		if (*str == '-')
			count_pn++;
		if (*str == '+')
			count_pos++;
		if ((count_pn > 0 || count_pos > 0) && (*str != '-' && *str != '+'))
			return (0);
		if (*str != '-' && *str != '+'
			&& *str != ' ' && !(*str >= 9 && *str <= 13))
			return (0);
		str++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int		atoi;
	int		reel_atoi;
	int		count_pn;
	int		count_pos;

	atoi = 0;
	count_pn = 0;
	count_pos = 0;
	reel_atoi = r_atoi(str, atoi, count_pn, count_pos);
	return (reel_atoi);
}
// int main(void)
// {
// 	char	str[50] = "  +2147483647++=4ab567";

// 	printf("%d", ft_atoi(str));
// 	return 0;
// }
