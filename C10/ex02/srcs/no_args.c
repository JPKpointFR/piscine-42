/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-28 21:35:54 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-28 21:35:54 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	no_args(char **argv)
{
	char	buf;

	while (read(0, &buf, 1) != 0)
	{
		if (errno != 0)
		{
			ft_putstr(basename(argv[0]), 2);
			ft_putstr(": stdin: ", 2);
			ft_putstr(strerror(errno), 2);
			ft_putchar('\n', 2);
			return ;
		}
	}
}

void	no_args_stdin(int size, char **args)
{
	int		i;
	char	c[1];
	char	*buf;

	buf = malloc(sizeof(char) * (size + 1));
	if (buf == NULL)
		return ;
	i = 0;
	while (read(0, c, 1) != 0)
	{
		if (errno == 0)
		{
			if (i >= size)
				ft_swap_tail(buf, size);
			else
				i++;
			buf[i - 1] = c[0];
		}
		else
			return (print_error(args, 1));
	}
	i = -1;
	while (++i < size && buf[i])
		ft_putchar(buf[i], 1);
}
