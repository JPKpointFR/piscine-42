/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-28 21:37:21 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-28 21:37:21 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_file_count(char *filepath)
{
	int		file;
	int		size;
	int		sizetot;
	char	buf[__BUFF];

	file = open(filepath, O_RDWR);
	if (file != -1)
	{
		sizetot = 0;
		size = read(file, buf, __BUFF);
		while (size != 0)
		{
			sizetot += size;
			size = read(file, buf, __BUFF);
		}
		return (sizetot);
	}
	else
		return (-1);
}

// void	ft_file_get(char *filepath, int sizetot, int size)
// {
// 	int		i;
// 	int		bufsize;
// 	int		file;
// 	char	buf[__BUFF];

// 	file = open(filepath, O_RDWR);
// 	i = 0;
// 	bufsize = read(file, buf, __BUFF);
// 	while (bufsize != 0
// 		&& ((i + 1) * __BUFF < sizetot - size))
// 	{
// 		bufsize = read(file, buf, __BUFF);
// 		i++;
// 	}
// 	if (size >= sizetot)
// 		i = -1;
// 	else
// 		i = (sizetot - size) - (i * __BUFF) - 1;
// 	while (++i < __BUFF && i < bufsize)
// 		ft_putchar(buf[i], 1);
// 	bufsize = read(file, buf, __BUFF);
// 	while (bufsize != 0)
// 	{
// 		ft_putstr_buf(buf, bufsize);
// 		bufsize = read(file, buf, __BUFF);
// 	}
// }

void	seek_to_start(int file, int sizetot, int size, int *start_pos)
{
	int		i;
	int		bufsize;
	char	buf[__BUFF];

	i = 0;
	bufsize = read(file, buf, __BUFF);
	while (bufsize != 0 && ((i + 1) * __BUFF < sizetot - size))
	{
		bufsize = read(file, buf, __BUFF);
		i++;
	}
	if (size >= sizetot)
		*start_pos = 0;
	else
		*start_pos = (sizetot - size) - (i * __BUFF) - 1;
}

void	read_and_display(int file, int start_pos)
{
	int		bufsize;
	char	buf[__BUFF];
	int		i;

	i = start_pos;
	bufsize = read(file, buf, __BUFF);
	while (++i < __BUFF && i < bufsize)
		ft_putchar(buf[i], 1);
	bufsize = read(file, buf, __BUFF);
	while (bufsize != 0)
	{
		ft_putstr_buf(buf, bufsize);
		bufsize = read(file, buf, __BUFF);
	}
}

void	ft_file_get(char *filepath, int sizetot, int size)
{
	int	file;
	int	start_pos;

	file = open(filepath, O_RDWR);
	if (file < 0)
		return ;
	seek_to_start(file, sizetot, size, &start_pos);
	read_and_display(file, start_pos);
	close(file);
}
