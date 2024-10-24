/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-29 12:55:38 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-29 12:55:38 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

// // Fonction de test : vérifie si la longueur de la chaîne est supérieure à 3
// int test_length_greater_than_3(char *str) {
// 	int length = 0;
// 	while (str[length] != '\0') {
// 		length++;
// 	}
// 	return (length > 3);  // Retourne 1 (vrai) si longueur > 3, sinon 0 (faux)
// }

// int main(void) {
// 	// Tableau de chaînes de caractères pour le test
// 	char *tab[] = { "abc", "abcd", "ab", "abcdef", NULL };

// 	// Appel de ft_any avec le tableau et la fonction de test
// 	int result = ft_any(tab, test_length_greater_than_3);
// 	// Affichage du résultat
// 	if (result)
// 	{
// 		printf("Il existe au moins une chaîne avec une longueur > 3.\n");
// 	}
// 	else
// 	{
// 		printf("Aucune chaîne n'a une longueur > 3.\n");
// 	}
// 	return 0;
// }
