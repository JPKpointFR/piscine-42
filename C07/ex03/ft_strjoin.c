/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-21 11:32:55 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-21 11:32:55 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	count(int size, char **strs, char *sep)
{
	int	i;
	int	id;
	int	ib;
	int	lenght;

	i = 0;
	id = 0;
	ib = 0;
	lenght = 0;
	while (sep[i])
		i++;
	while (id < size)
	{
		while (strs[id][ib])
		{
			lenght++;
			ib++;
		}
		id++;
	}
	lenght += i * (size - 1);
	return (lenght + 1);
}

char	*strjoin_bis(int size, char **strs, char *sep, char *str)
{
	int		num;
	int		up;
	int		ip;
	int		i;
	int		o;

	up = 0;
	ip = 0;
	i = -1;
	num = count(size, strs, sep);
	while (strs[up] && up < size && i++ < num)
	{
		o = 0;
		while (strs[up][o])
			str[ip++] = strs[up][o++];
		o = 0;
		up++;
		while (sep[o] && up < size)
			str[ip++] = sep[o++];
		o = 0;
	}
	str[ip] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		lenght;
	char	*str;

	if (size == 0)
		return (malloc(1));
	lenght = count(size, strs, sep);
	str = malloc(lenght * sizeof(char));
	if (!str)
		return (NULL);
	return (strjoin_bis(size, strs, sep, str));
}

// int	main(void)
// {
// 	char	*strs[] = {"Hello", "World", "from", "C"};
// 	char	*sep = "0000000000000000000000000000";
// 	char	*result;
// 	int		size = 2;

// 	result = ft_strjoin(size, strs, sep);

// 	if (result)
// 	{
// 		printf("%s\n", result);
// 		free(result);
// 	}
// 	else
// 		printf("Erreur d'allocation mémoire\n");

// 	return (0);
// }
