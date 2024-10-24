/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-29 11:56:41 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-29 11:56:41 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

// int	print(int n)
// {
// 	return (n * 9);
// }

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*int_tab;

	i = 0;
	int_tab = malloc(sizeof(int) * length);
	if (!int_tab)
		return (NULL);
	while (i < length)
	{
		int_tab[i] = f(tab[i]);
		i++;
	}
	return (int_tab);
}

// int	main(void)
// {
// 	int bat[3] = {1, 2, 3};
// 	int	*tab = ft_map(bat, 2, &print);
// 	int i = 0;
// 	while (tab[i])
// 	{
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}
// 	return 0;
// }