/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-29 09:51:01 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-29 09:51:01 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_hexdump.h"

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		size;

	i = 0;
	while (++i < argc)
	{
		if (!(argv[1][0] == '-' && argv[1][1] == 'C'))
			write(1, "error -C", 8);
		else if (!(*argv[i] == '-' && *(argv[i] + 1) == 'C'))
		{
			size = ft_file_size(argv[i]);
			str = ft_copy_input(argv[i], size);
			ft_hexdump(str, size);
		}
	}
	return (0);
}
