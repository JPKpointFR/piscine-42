/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:43:53 by adcisse           #+#    #+#             */
/*   Updated: 2024/08/13 13:43:59 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && *s1 && *s2 && n > i)
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	printf("%d", ft_strncmp("aaaaa", "uuuuuuaaaaaaa", 0));
// 	printf("%s", "*");
// 	printf("%d", strncmp("aaaaa", "uuuuuaaaaaaaa", 0));
// 	return (0);
// }
