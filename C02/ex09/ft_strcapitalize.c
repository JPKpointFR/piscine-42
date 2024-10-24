/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:06:16 by adcisse           #+#    #+#             */
/*   Updated: 2024/08/12 16:06:20 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	is_alphanumeric(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize_next;

	capitalize_next = 1;
	i = 0;
	while (str[i])
	{
		if (is_alphanumeric(str[i]))
		{
			if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (!capitalize_next && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			capitalize_next = 0;
		}
		else
		{
			capitalize_next = 1;
		}
		i++;
	}
	return (str);
}
// int	main(void) {
// 	char c[] = "42 eSt 2La cLEf OUI ty 4 H 4j5y 78996dGG8889RT7";
// 	char *i = ft_strcapitalize(c);
// 	write(1, i, 50);
// 	return 0;
// }
