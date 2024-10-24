/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dump.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-29 09:56:14 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-29 09:56:14 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_hexdump.h"

void	ft_hexdump(char *str, int size)
{
	int		i;
	int		j;

	j = 0;
	while (str[j])
	{
		ft_print_offset(j, 1);
		write(1, "  ", 2);
		i = j - 1;
		while (++i < 16 + j)
			ft_print_hex(*(str + i), i, size);
		i = j - 1;
		write(1, "|", 1);
		while (++i < 16 + j && str[i])
			ft_print_ascii(*(str + i));
		write(1, "|\n", 2);
		j += 16;
	}
	ft_print_offset(j, 1);
	write(1, "\n", 1);
	free(str);
}
