/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltacos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 08:09:27 by ltacos            #+#    #+#             */
/*   Updated: 2021/08/17 08:13:08 by ltacos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.h"

int	DisplayFile(char *file)
{
	int		fd;
	char	buf[BUF_SIZE];

	fd = open (file, O_RDONLY, 0);
	if (fd == -1)
	{
		write (2, CRF, 19);
		return (1);
	}
	while (read (fd, buf, 1))
		write (1, buf, 1);
	close(fd);
	return (0);
}
