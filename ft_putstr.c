/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:23:48 by acardena          #+#    #+#             */
/*   Updated: 2022/02/22 13:07:39 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (*(str + x) != '\0')
	{
		ft_putchar(*(str + x));
		x++;
	}
}
/*
int main(void)
{
	ft_putstr("alejandro");
	return (0);
}*/
