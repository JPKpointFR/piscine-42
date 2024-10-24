/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:06:34 by adcisse           #+#    #+#             */
/*   Updated: 2024/08/08 20:06:46 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght])
	{
		lenght++;
	}
	return (lenght);
}
// int main(void)
// {
// 	int num = ft_strlen("42 est la clef");
// 	printf("%d", num);
// 	return 0;
// }
