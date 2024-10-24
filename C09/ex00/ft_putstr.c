/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-25 12:09:18 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-25 12:09:18 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	longeur;

	longeur = 0;
	while (str[longeur])
	{
		longeur++;
	}
	write(1, str, longeur);
}

// int main(int argc, char const *argv[])
// {
// 	ft_putstr("42 est la clef");
// 	return 0;
// }