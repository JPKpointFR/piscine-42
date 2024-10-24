/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-29 14:24:22 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-29 14:24:22 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	up;
	int	down;
	int	i;

	i = 0;
	up = 0;
	down = 0;
	while (i < length -1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			up++;
		if (f(tab[i], tab[i + 1]) <= 0)
			down++;
		i++;
	}
	if (up == i || down == i)
		return (1);
	return (0);
}

// #include <stdio.h>
// int compare(int a, int b)
// {
//     return (a - b);
// }
// int	main(void)
// {
// 	int tab1[] = {1, 2, 3, 4, 5};
// 	int tab2[] = {5, 4, 3, 2, 1};
// 	if (ft_is_sort(tab1, 5, &compare))
// 		printf("tab1 is sorted\n");
// 	else
// 		printf("tab1 is not sorted\n");
// 	if (ft_is_sort(tab2, 5, &compare))
// 		printf("tab2 is sorted\n");
// 	else
// 		printf("tab2 is not sorted\n");
// 	return (0);
// }
