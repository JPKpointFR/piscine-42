/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-26 15:51:58 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-26 15:51:58 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#include <stdio.h>

void	ft_putchar(char c, int o)
{
	write(o, &c, 1);
}

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght])
	{
		lenght++;
	}
	return (lenght);
}

void	ft_putstr(char *str, int out, int len)
{
	int	i;

	if (len == 0)
		len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		ft_putchar(str[i], out);
		i++;
	}
}

void	ft_read(char *path)
{
	int		file;
	int		size;
	char	buf[4097];

	file = open(path, O_RDONLY);
	if (file != -1)
	{
		size = read(file, buf, 4096);
		while (size != 0)
		{
			ft_putstr(buf, 1, size);
			size = read(file, buf, 4096);
		}
	}
	else
		ft_putstr("Cannot read file.\n", 2, 0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n", 2, 0);
	else if (argc != 2)
		ft_putstr("Too many arguments.\n", 2, 0);
	else
		ft_read(argv[1]);
	return (0);
}

// write(1, "\n\n", 2);
// printf("%d\n", size);
// printf("%s\n", buf);
// write(1, "\n\n", 2);