/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-18 18:53:38 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-18 18:53:38 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
// int main(void)
// {
// 	printf("%d", ft_recursive_factorial(5));
// 	return 0;
// }
