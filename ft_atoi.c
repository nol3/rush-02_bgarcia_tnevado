/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnevado- <tnevado-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:32:58 by tnevado-          #+#    #+#             */
/*   Updated: 2022/02/27 19:50:23 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_atoi(char *str)
{
	int	num;
	int	i;
	int	signo;

	i = 0;
	num = 0;
	signo = 1;
	while ((str[i] < '0') && (str[i] > '9') && (str[i] != '-'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signo = signo * -1;
			i++;
	}	
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
			i++;
	}
	num = num * signo;
	return (num);
}

int	main(int argc, char **argv)
{
	int		a;
	char	*str;

	a = 0;
	if (argv[1])
	{
		printf("entrada de dato a ft_atoi:%s\n", argv[1]);
		str = argv[1];
		ft_atoi(str);
		a = ft_atoi(str);
		printf("El número introducido es:%d\n", a);
	}
	else
		printf("Número erróneo \n");
	return (0);
}
