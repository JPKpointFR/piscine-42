/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-17 19:14:39 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-17 19:14:39 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	i = nb - 1;
	while (i > 0)
	{
		nb *= i;
		i--;
	}
	return (nb);
}
// int main(void)
// {
// 	printf("%d", ft_iterative_factorial(10));
// 	return 0;
// }
