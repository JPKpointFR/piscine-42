/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:44:27 by adcisse           #+#    #+#             */
/*   Updated: 2024/08/13 13:44:55 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*conc;

	conc = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (conc);
}

// int	main(void)
// {
// 	char d[20] = "un deux trois ";
// 	char a[] = "quatre cinq six";
// 	ft_strcat(d, a);

// 	return (0);
// }
