/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-13 11:46:30 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-13 11:46:30 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	id;

	if (to_find[0] == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 0;
			id = 0;
			while (to_find[i])
			{
				if (str[i] != to_find[i])
					id = 1;
				i++;
			}
			if (id == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
/* int	main(void)
{
	char str[] = "un deux trois ";
	char *to_find = "popi";

	char *i = ft_strstr(str, to_find);
	char *j = strstr(str, to_find);
	write(1, i, 15);
	write(1, "-", 1);
	write(1, j, 15);
	return (0);
} */