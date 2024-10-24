/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-29 10:55:46 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-29 10:55:46 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	print(int n)
// {
// 	write(1, &"0123456789"[n % 10], 1);
// }

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// int main(void)
// {
// 	int tab[3] = {1, 2, 3};
// 	ft_foreach( tab, 2, &print);
// 	return 0;
// }
