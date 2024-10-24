/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-20 11:33:20 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-20 11:33:20 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		*str;
	int		i;
	int		id;

	if (min >= max)
		return (0);
	id = max - min;
	i = 0;
	str = malloc(id * sizeof(int));
	if (!str)
		return (NULL);
	while (i < id)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	int *str = ft_range(1, 100);
// 	int i = 0;

// 	while (i < 100)
// 	{
// 		printf("%d\n", str[i]);
// 		i++;
// 	}
// 	return 0;
// }
