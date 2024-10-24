/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-16 08:00:46 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-16 08:00:46 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_print_number(char number)
{
	write(1, &number, 1);
}

void	ft_putnbr(int nb)
{
	int	inter;

	if (nb == -2147483648)
	{
		inter = (nb - nb) + nb / 10;
		ft_putnbr(inter);
		ft_putnbr(8);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_print_number(nb + '0');
}
// int main(void)
// {
// 	int nb = -2147483648;
// 	ft_putnbr(nb);
// 	return 0;
// }
