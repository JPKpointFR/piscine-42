/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-20 16:20:40 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-20 16:20:40 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*inter;
	int		i;
	int		id;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	id = max - min;
	i = 0;
	inter = malloc(id * sizeof(int));
	if (!inter)
		return (-1);
	while (i < id)
	{
		inter[i] = min;
		min++;
		i++;
	}
	*range = inter;
	return (id);
}

// int	main(void)
// {
// 	int	*range;
// 	int	size;
// 	int	i;
// 	// Test 1: min < max
// 	printf("Test 1: min = 5, max = 10\n");
// 	size = ft_ultimate_range(&range, 5, 10);
// 	if (size > 0)
// 	{
// 		printf("Range size: %d\n", size);
// 		printf("Values: ");
// 		for (i = 0; i < size; i++)
// 			printf("%d ", range[i]);
// 		printf("\n");
// 		free(range); // Libérer la mémoire allouée
// 	}
// 	else
// 		printf("Error or empty range.\n");
// 	// Test 2: min >= max
// 	printf("\nTest 2: min = 10, max = 5\n");
// 	size = ft_ultimate_range(&range, 10, 5);
// 	if (size > 0)
// 	{
// 		printf("Range size: %d\n", size);
// 		printf("Values: ");
// 		for (i = 0; i < size; i++)
// 			printf("%d ", range[i]);
// 		printf("\n");
// 		free(range); // Libérer la mémoire allouée
// 	}
// 	else
// 		printf("Error or empty range.\n");
// 	// Test 3: min = max
// 	printf("\nTest 3: min = 5, max = 5\n");
// 	size = ft_ultimate_range(&range, 5, 5);
// 	if (size > 0)
// 	{
// 		printf("Range size: %d\n", size);
// 		printf("Values: ");
// 		for (i = 0; i < size; i++)
// 			printf("%d ", range[i]);
// 		printf("\n");
// 		free(range); // Libérer la mémoire allouée
// 	}
// 	else
// 		printf("Error or empty range.\n");
// 	// Test 4: Large range
// 	printf("\nTest 4: min = -3, max = 3\n");
// 	size = ft_ultimate_range(&range, -3, 3);
// 	if (size > 0)
// 	{
// 		printf("Range size: %d\n", size);
// 		printf("Values: ");
// 		for (i = 0; i < size; i++)
// 			printf("%d ", range[i]);
// 		printf("\n");
// 		free(range); // Libérer la mémoire allouée
// 	}
// 	else
// 		printf("Error or empty range.\n");
// 	return (0);
// }
