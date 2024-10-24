/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-25 16:23:28 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-25 16:23:28 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	check_sep(char c, char *sep)
{
	int		i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count(char *str, char *charset)
{
	int	i;
	int	nb_split;

	nb_split = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (check_sep(str[i + 1], charset) == 1
			&& check_sep(str[i], charset) == 0)
			nb_split++;
		i++;
	}
	return (nb_split);
}

void	write_str(char *dest, char *from, char *charset)
{
	int	i;

	i = 0;
	while (check_sep(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	write_split(char **split, char *str, char *charset)
{
	int	i;
	int	j;
	int	nb_split;

	nb_split = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (check_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (check_sep(str[i + j], charset) == 0)
				j++;
			split[nb_split] = malloc(sizeof(char) * (j + 1));
			write_str(split[nb_split], str + i, charset);
			i += j;
			nb_split++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		nb_split;

	nb_split = count(str, charset);
	res = malloc((nb_split + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	res[nb_split] = 0;
	write_split(res, str, charset);
	return (res);
}

// int	main(void)
// {
// 	char *str = "1/;:=2345 6789/;101112131/4151617 ";
// 	char *sep = "/ ;";
// 	char **tab = ft_split(str, sep);
// 	int i = 0;

// 	while (tab[i] != NULL)
// 	{
// 		printf("%s\n", tab[i]);
// 		free(tab[i]);
// 		i++;
// 	}
// 	free(tab);
// 	return 0;
// }
