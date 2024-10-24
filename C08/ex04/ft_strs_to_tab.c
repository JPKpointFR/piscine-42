/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-22 17:35:19 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-22 17:35:19 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	count(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*duplicate(char *dup)
{
	char	*str;
	int		i;

	str = malloc((count(dup) + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (dup[i])
	{
		str[i] = dup[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;

	array = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!array)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i].size = count(av[i]);
		array[i].str = av[i];
		array[i].copy = duplicate(av[i]);
		i++;
	}
	array[i] = (struct s_stock_str){0, 0, 0};
	return (array);
}

// int main(void)
// {
// 	char *strs[] =  { "salut", "123", "popopo", "ipijh"};
// 	struct s_stock_str *op = ft_strs_to_tab(3, strs);
// 	int i = 0;
// 	while (i < 3)
// 	{
// 		printf("%s\n", op[i].str);
// 		printf("%d\n", op[i].size);
// 		printf("%s\n", op[i].copy);
// 		i++;
// 	}
// 	free(op);
// 	return 0;
// }
