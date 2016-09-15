/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 15:14:02 by nboste            #+#    #+#             */
/*   Updated: 2016/09/09 15:34:29 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <unistd.h>

# define TRUE 1

# define CLOSE 0

# define OPEN 1

# define EXIT_SUCCESS 0

typedef struct	s_door
{
	int	state;
}				t_door;

typedef char	t_bool;

void			ft_putstr(char *str);

t_bool			close_door(t_door *door);

t_bool			is_door_open(t_door *door);

t_bool			is_door_close(t_door *door);

t_bool			open_door(t_door *door);

#endif
