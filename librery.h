/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   librery.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:53:20 by acardena          #+#    #+#             */
/*   Updated: 2022/02/27 19:53:46 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRERY_H
# define LIBRERY_H
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>

struct s_numbers
{
	char	*key;
	char	*value;
}

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

#endif
