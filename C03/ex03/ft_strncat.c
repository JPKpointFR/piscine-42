/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-13 11:45:51 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-13 11:45:51 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*conc;
	unsigned int	n;

	conc = dest;
	n = 0;
	while (*dest)
		dest++;
	while (n < nb && *src)
	{
		*dest = *src;
		dest++;
		src++;
		n++;
	}
	*dest = '\0';
	return (conc);
}
/* 
int	main(void)
{
	char *d = "";
	char *a = "quatre cinq six";
	ft_strncat(d, a, 11);
	printf("%s", d);
	printf("%s", "\n\n");
	char u[15] = "";
	char *p = "quatre cinq six";
	strncat(u, p, 11);
	printf("%s", u);

	return (0);
}
 */