/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-28 21:42:49 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-28 21:42:49 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

#define BUFFER_SIZE 16

void	ft_hexdump(char *str, int size);
void	ft_print_hex(char c, int i, int size);
void	ft_print_ascii(char c);
char	*ft_copy_input(char *file_name, int size);
void	ft_print_offset(int n, int i);
int		ft_file_size(char *file_name);
