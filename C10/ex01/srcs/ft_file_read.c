/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-27 14:35:43 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-27 14:35:43 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_file_read(char *path)
{
	int		file;
	int		size;
	char	buf[OCT];

	file = open(path, O_RDWR);
	if (file != -1)
	{
		size = read(file, buf, OCT);
		while (size != 0)
		{
			ft_putstr_buf(buf, size);
			size = read(file, buf, OCT);
		}
		return (1);
	}
	else
		return (0);
}
