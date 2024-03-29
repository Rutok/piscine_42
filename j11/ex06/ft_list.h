/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 09:55:14 by nboste            #+#    #+#             */
/*   Updated: 2016/09/13 16:08:27 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list				*ft_create_elem(void *data);

void				ft_list_push_back(t_list **begin_list, void *data);

void				ft_list_push_front(t_list **begin_list, void *data);

int					ft_list_size(t_list *begin_list);

t_list				*ft_list_last(t_list *begin_list);

t_list				*ft_list_push_params(int ac, char **av);

void				ft_list_clear(t_list **begin_list);

#endif
