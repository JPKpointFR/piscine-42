/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-29 13:40:55 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-29 13:40:55 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			num++;
		i++;
	}
	return (num);
}

// #include <stdio.h>

// // Fonction de test : retourne 1 si la chaîne contient la lettre 'a', 0 sinon
// int contains_a(char *str)
// {
//     while (*str)
//     {
//         if (*str == 'a')
//             return (1);
//         str++;
//     }
//     return (0);
// }

// int main(void)
// {
//     // Tableau de chaînes de caractères
//     char *tab[] = {
//         "apple",
//         "banana",
//         "cherry",
//         "dte",
//         "grape"
//     };
//     // Longueur du tableau
//     int length = 5;
//     // Appel de ft_count_if avec la fonction contains_a
//     int count = ft_count_if(tab, length, &contains_a);
//     // Affichage du résultat
//     printf("Number of strings containing 'a': %d\n", count);
//     return 0;
// }
