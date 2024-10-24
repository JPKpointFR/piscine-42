/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-25 12:11:30 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-25 12:11:30 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include "l.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int main(void)
// {
// 	// char *str = "salut";
// 	// int o = ft_strlen(str);
// 	printf("%d", ft_strcmp("oo5", "ooo"));
// 	return 0;
// }