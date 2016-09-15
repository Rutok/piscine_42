/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 12:38:55 by nboste            #+#    #+#             */
/*   Updated: 2016/09/14 19:04:07 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	remove_elem(t_list **begin_list, t_list **tmp, t_list **prev)
{
	if (!*prev)
	{
		*begin_list = (*tmp)->next;
		free(*tmp);
		*tmp = *begin_list;
	}
	else
	{
		(*prev)->next = (*tmp)->next;
		free(*tmp);
		*tmp = (*prev)->next;
	}
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *prev;

	tmp = *begin_list;
	prev = NULL;
	while (tmp)
	{
		if (!cmp(data_ref, tmp->data))
		{
			remove_elem(begin_list, &tmp, &prev);
		}
		else
		{
			prev = tmp;
			tmp = tmp->next;
		}
	}
}
