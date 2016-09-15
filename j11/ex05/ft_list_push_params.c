/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 14:25:40 by nboste            #+#    #+#             */
/*   Updated: 2016/09/13 16:11:38 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elem;

	elem = ft_create_elem(data);
	if (!(*begin_list))
		*begin_list = elem;
	else
	{
		elem->next = *begin_list;
		*begin_list = elem;
	}
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;

	i = 0;
	av++;
	list = NULL;
	while (i < ac - 1)
	{
		if (!i)
			list = ft_create_elem(*av);
		else
			ft_list_push_front(&list, *av);
		av++;
		i++;
	}
	return (list);
}
