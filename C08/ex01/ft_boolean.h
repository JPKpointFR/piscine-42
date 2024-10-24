/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_boolean.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-22 12:06:59 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-22 12:06:59 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <unistd.h>

typedef enum t_bool
{
	reel = 0,
	fake = 1,
}	t_bool;

int	even(int e)
{
	return (e % 2 == 0);
}

#define FALSE reel
#define TRUE fake
#define EVEN even
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define SUCCESS 0
