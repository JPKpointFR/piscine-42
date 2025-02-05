/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gest_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-28 21:36:09 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-28 21:36:09 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	**two_args(int *argc, char **argv, int *octet)
{
	int		i;
	char	**args;

	*octet = 0;
	i = 1;
	while (argv[1][++i] && argv[1][i] >= '0' && argv[1][i] <= '9')
		*octet = *octet * 10 + (argv[1][i] - '0');
	if (*argc > 2)
	{
		args = malloc(sizeof(char *) * *argc);
		args[0] = argv[0];
		i = 1;
		while (++i < *argc)
			args[i - 1] = ft_strdup(argv[i]);
		args[i - 1] = 0;
		*argc += 1;
		return (args);
	}
	args = malloc(sizeof(char *) * 2);
	args[0] = argv[0];
	args[1] = "stdin";
	no_args_stdin(*octet, args);
	return (0);
}

char	**three_args(int argc, char **argv, int octet)
{
	int		i;
	char	**args;

	if (argc > 3)
	{
		args = malloc(sizeof(char *) * (argc - 1));
		args[0] = argv[0];
		i = 2;
		while (++i < argc)
			args[i - 2] = ft_strdup(argv[i]);
		args[i - 2] = 0;
	}
	else
	{
		args = malloc(sizeof(char *) * 2);
		args[0] = argv[0];
		args[1] = "stdin";
		no_args_stdin(octet, args);
		return (0);
	}
	return (args);
}

void	gest_args(int argc, char **argv)
{
	int		octet;
	char	**args;

	if (argc == 1 || argv[1][0] != '-' || argv[1][1] != 'c')
		no_args(argv);
	else if (argv[1][0] == '-' && argv[1][1] == 'c')
	{
		if (argc == 2)
			return (print_help(argv[0]));
		if (argv[1][2] != '\0')
			args = two_args(&argc, argv, &octet);
		else
		{
			octet = ft_atoi(argv[2]);
			if (octet == -1)
				return (print_illegal(argv[0], argv[2]));
			args = three_args(argc, argv, octet);
		}
		if (args != 0)
			print_file(argc, args, octet);
	}
}

// void	gest_args(int argc, char **argv)
// {
// 	int			octet;
// 	char		**args;

// 	if (argc == 1 || argv[1][0] != '-' || argv[1][1] != 'c')
// 		no_args(argv);
// 	else if (argv[1][0] == '-' && argv[1][1] == 'c')
// 	{
// 		if (argc == 2)
// 		{
// 			print_help(argv[0]);
// 			return ;
// 		}
// 		if (argv[1][2] != '\0')
// 			args = two_args(&argc, argv, &octet);
// 		else
// 		{
// 			octet = ft_atoi(argv[2]);
// 			if (octet != -1)
// 				args = three_args(argc, argv, octet);
// 			else
// 			{
// 				print_illegal(argv[0], argv[2]);
// 				return ;
// 			}
// 		}
// 		if (args != 0)
// 			print_file(argc, args, octet);
// 	}
// }

// void	gest_args(int argc, char **argv)
// {
// 	int			octet;
// 	char		**args;

// 	if (argc == 1 || argv[1][0] != '-' || argv[1][1] != 'c')
// 		no_args(argv);
// 	else if (argv[1][0] == '-' && argv[1][1] == 'c')
// 	{
// 		if (argc == 2)
// 		{
// 			print_help(argv[0]);
// 			return ;
// 		}
// 		if (argv[1][2] != '\0')
// 			args = two_args(&argc, argv, &octet);
// 		else if (octet = ft_atoi(argv[2]) != -1)
// 			args = three_args(argc, argv, octet);
// 		else
// 		{
// 			print_illegal(argv[0], argv[2]);
// 			return ;
// 		}
// 		if (args != 0)
// 			print_file(argc, args, octet);
// 	}
// }
