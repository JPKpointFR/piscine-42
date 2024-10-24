/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:02:33 by adcisse           #+#    #+#             */
/*   Updated: 2024/08/12 16:02:40 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	lenght;

	lenght = 0;
	while (src[lenght])
	{
		dest[lenght] = src[lenght];
		lenght++;
	}
	dest[lenght] = '\0';
	return (dest);
}
// char a[3] = "qqq";
// char b[14] = "42 est la clef";

// int main(void)
// {
// 	ft_strcpy(a, b);
// 	return (0);
// }
