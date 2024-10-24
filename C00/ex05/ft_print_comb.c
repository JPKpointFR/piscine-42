/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:23:45 by adcisse           #+#    #+#             */
/*   Updated: 2024/08/08 12:23:50 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	zero;
	int	un;
	int	deux;

	zero = '0';
	while (zero <= '7')
	{
		un = zero + 1;
		while (un <= '8')
		{
			deux = un + 1;
			while (deux <= '9')
			{
				write(1, &zero, 1);
				write(1, &un, 1);
				write(1, &deux, 1);
				if (zero != 7)
					write(1, ", ", 2);
				deux++;
			}
			un++;
		}
		zero++;
	}
}
