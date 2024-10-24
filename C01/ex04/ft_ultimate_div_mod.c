/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:05:15 by adcisse           #+#    #+#             */
/*   Updated: 2024/08/08 20:05:51 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	reste;
	int	a_prime;
	int	b_prime;

	a_prime = *a;
	b_prime = *b;
	division = a_prime / b_prime;
	reste = a_prime % b_prime;
	*a = division;
	*b = reste;
}
// int main(int argc, char const *argv[])
// {

// 	int a_prime = 2;
// 	int b_prime = 2;
// 	int *a = &a_prime;
// 	int *b = &b_prime;

// 	ft_ultimate_div_mod(a, b);
// 	return 0;
// }
