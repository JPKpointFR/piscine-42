/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-27 14:40:35 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-27 14:40:35 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putstr(char *str, int out)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i], out);
		i++;
	}
}

void	ft_putstr_buf(char *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putchar(str[i], 1);
		i++;
	}
}
