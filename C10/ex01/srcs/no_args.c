/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-27 15:05:06 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-27 15:05:06 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	no_args(char **argv)
{
	char	buf;

	while (read(0, &buf, 1) != 0)
	{
		if (errno == 0)
			ft_putchar(buf, 1);
		else
		{
			ft_putstr(basename(argv[0]), 2);
			ft_putstr(": stdin: ", 2);
			ft_putstr(strerror(errno), 2);
			ft_putchar('\n', 2);
			return ;
		}
	}
}
