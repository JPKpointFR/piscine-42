/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcisse <adcisse@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-27 15:25:07 by adcisse           #+#    #+#             */
/*   Updated: 2024-08-27 15:25:07 by adcisse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define OCT 30000

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>
#include <stdio.h>

void	ft_putchar(char c, int out);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str, int out);
void	ft_putstr_buf(char *str, int size);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_file_read(char *path);
void	no_args(char **argv);
