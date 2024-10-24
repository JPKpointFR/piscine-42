/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-19 17:30:33 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-19 17:30:33 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char const **argv)
{
	int	i;
	int	w;
	int	inv;

	i = argc -1;
	w = 0;
	inv = 0;
	if (argc >= 2)
	{
		while (argv[i] && i != 0)
		{
			while (argv[i][w])
			{
				w++;
			}
			write(1, argv[i], w);
			write(1, "\n", 1);
			i--;
			w = 0;
		}
	}
	return (0);
}
