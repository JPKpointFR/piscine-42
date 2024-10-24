/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-20 08:13:25 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-20 08:13:25 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		id;

	i = 0;
	id = 0;
	while (src[i])
		i++;
	str = malloc(i + 1 * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[id] = src[i];
		id++;
		i++;
	}
	str[id] = '\0';
	return (str);
}

// int main(void)
// {
// 	printf("%s", ft_strdup("qwerty"));
// 	return 0;
// }
