/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltacos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 08:15:47 by ltacos            #+#    #+#             */
/*   Updated: 2021/08/17 08:18:31 by ltacos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <fcntl.h>

# define BUF_SIZE  1
# define FNM "File name missing.\n"
# define TMA "Too many arguments.\n"
# define CRF "Cannot read file.\n"

int	DisplayFile(char *file);

#endif
