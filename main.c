/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:20:38 by acardena          #+#    #+#             */
/*   Updated: 2022/02/27 19:47:05 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librery.h"

int	main(int argc, char **argv)
{
	int		file;
	int		cont;
	int		actual;
	char	buffer;

	cont = 0;
	file = open("numbers.dict.txt", O_RDONLY);
	if (file == -1)
		write(1, "Dict Error\n", 11);
	else
	{
		nr_bytes = read(result, buffer, 1000);
		close(result);
		if (nr_bytes == 0)
			write("Dict Error empty\n");
	}
	while (read(file, &buffer, 1) != 0)
	{
		if (buffer == '\n')
			cont++;
	}
	printf("%d", cont);
	close(file);
	return (0);
}
