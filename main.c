/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:20:38 by acardena          #+#    #+#             */
/*   Updated: 2022/02/26 17:33:07 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char **argv)
{
	int file;
	int cont;
	int actual;

	char buffer;
	cont = 0;
	file = open("numbers.dict.txt", O_RDONLY );

	if (file == -1)
	{
		write(1, "error", 5);
	}
	while (read(file, &buffer, 1) != 0)
	{
		if (buffer == '\n')
		{
			cont++;
		}
		printf("%c", buffer);
	}
	printf("%d", cont);
	close(file);
	return (0);
}
