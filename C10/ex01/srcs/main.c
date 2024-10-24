/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-27 14:51:50 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-27 14:51:50 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		no_args(argv);
	else
	{
		i = 1;
		while (i < argc)
		{
			if (ft_file_read(argv[i]) == 0)
			{
				ft_putstr(basename(argv[0]), 2);
				ft_putstr(": ", 2);
				ft_putstr(argv[i], 2);
				ft_putstr(": ", 2);
				ft_putstr(strerror(errno), 2);
				ft_putchar('\n', 2);
			}
			i++;
		}
	}
}
