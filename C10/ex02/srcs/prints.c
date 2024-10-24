/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-28 21:35:42 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-28 21:35:42 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	print_file(int argc, char **args, int octet)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	j = -1;
	while (args[++i] != 0)
	{
		size = ft_file_count(args[i]);
		if (size == -1)
		{
			if (errno != 21)
				print_error(args, i);
		}
		else
		{
			if (++j && argc > 4)
			{
				if (i != 1 && j != 0)
					ft_putchar('\n', 1);
				ft_putstr_headfile(args[i]);
			}
			ft_file_get(args[i], size, octet);
		}
	}
}

void	print_error(char **args, int i)
{
	ft_putstr(basename(args[0]), 2);
	ft_putstr(": ", 2);
	ft_putstr(args[i], 2);
	ft_putstr(": ", 2);
	ft_putstr(strerror(errno), 2);
	ft_putchar('\n', 2);
}

void	print_illegal(char *name, char *obj)
{
	ft_putstr(basename(name), 2);
	ft_putstr(": illegal offset -- ", 2);
	ft_putstr(obj, 2);
	ft_putchar('\n', 2);
}

void	print_help(char *name)
{
	ft_putstr(basename(name), 2);
	ft_putstr(": option require an argument -c\nusage: ", 2);
	ft_putstr(basename(name), 2);
	ft_putstr(" [-c # ] [file ...]\n", 2);
}
