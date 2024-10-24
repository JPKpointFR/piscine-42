/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-19 16:30:40 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-19 16:30:40 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char const **argv)
{
	int	i;
	int	w;

	i = 1;
	w = 0;
	if (argc >= 2)
	{
		while (argv[i])
		{
			while (argv[i][w])
			{
				w++;
			}
			write(1, argv[i], w);
			write(1, "\n", 1);
			i++;
			w = 0;
		}
	}
	return (0);
}
