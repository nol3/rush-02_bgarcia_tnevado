/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:03:12 by acardena          #+#    #+#             */
/*   Updated: 2022/02/27 20:47:21 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librery.h"

int	ft_size(int file)
{
	int		i;
	char	buffer;

	i = 0;
	while (read(file, &buffer, 1) != 0)
		i++;
	return (i);
}

char	*ft_create_table(int file, int size)
{
	int		i;
	char	buffer;
	char	*table;

	i = 0;
	table = malloc(size);
	while (read(file, &buffer, 1) != 0)
	{
		table[i] = buffer;
		i++;
	}
	return (table);
}

void	ft_open(char *filename)
{
	int		fd1;
	int		numbytes;
	char	*table;
	t_words	*dict;

	fd1 = open(filename, O_RDONLY);
	numbytes = ft_size(fd1);
	close(fd1);
	fd1 = open(filename, O_RDONLY);
	table = ft_create_table(fd1, numbytes);
	ft_write("683", dict);
}
