/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:22:50 by adcisse           #+#    #+#             */
/*   Updated: 2024/08/08 12:23:02 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;
	int		number;

	number = 0;
	while (number < 10)
	{
		c = number + '0';
		write(1, &c, 1);
		number++;
	}
}
