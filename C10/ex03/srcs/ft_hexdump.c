/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-29 09:49:53 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-29 09:49:53 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_hexdump.h"

int	ft_file_size(char *file_name)
{
	char	buffer;
	int		size;
	int		file_desc;

	buffer = 0;
	size = 0;
	file_desc = open(file_name, O_RDONLY);
	if (file_desc < 0)
	{
		write(2, "ft_hexdump: ", 12);
		while (*file_name)
			write(2, file_name++, 1);
		write(2, ": No such file or directory\n", 28);
	}
	else
		while (read(file_desc, &buffer, 1) > 0)
			++size;
	close(file_desc);
	return (size);
}

char	*ft_copy_input(char *file_name, int size)
{
	char	buffer;
	int		i;
	char	*str;
	int		file_desc;

	buffer = 0;
	i = 0;
	str = malloc(size + 1);
	file_desc = open(file_name, O_RDONLY);
	i = 0;
	while (read(file_desc, &buffer, 1) > 0)
		str[i++] = buffer;
	str[i] = '\0';
	close(file_desc);
	return (str);
}

void	ft_print_offset(int n, int i)
{
	const char	*base;

	base = "0123456789abcdef";
	if (n / 16 > 0)
		ft_print_offset(n / 16, i + 1);
	else if (i < 8)
		while (++i <= 8)
			write(1, "0", 1);
	write(1, base + n % 16, 1);
}

void	ft_print_hex(char c, int i, int size)
{
	const char	base[16] = "0123456789abcdef";

	if (i < size)
	{
		write(1, base + c / 16, 1);
		write(1, base + c % 16, 1);
		write(1, " ", 1);
	}
	else
		write(1, "   ", 3);
	if ((i + 1) % 8 == 0)
		write(1, " ", 1);
}

void	ft_print_ascii(char c)
{
	if (c >= 32 && c <= 126)
		write(1, &c, 1);
	else
		write(1, ".", 1);
}
