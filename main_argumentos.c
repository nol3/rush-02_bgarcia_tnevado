/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnevado- <tnevado-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:16:28 by tnevado-          #+#    #+#             */
/*   Updated: 2022/02/27 13:21:19 by tnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int main(int argc, char **argv)
{
	char	num;//el número a analizar
	
	if(argc == 2)
		num = *argv[2];
	//el diccionario es el que ya tenemos ft_tabla
	if(argc == 3)
		num = *argv[3];
	//importamos el dicconario nuevo, desde el argumento ft_tabla
	if(argc != 2 && argc != 3)
	{
		write(1,"error", 5);
			return (1);
	}
	printf("El número a analizar es: %c\n", num); 
	//ft_atoi para num, return(num)
	return (0);
}
