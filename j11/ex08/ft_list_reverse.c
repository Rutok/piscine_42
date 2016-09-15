/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 16:38:03 by nboste            #+#    #+#             */
/*   Updated: 2016/09/14 12:33:10 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list *curr;
	t_list *tmp_next;
	t_list *tmp;

	curr = *begin_list;
	tmp_next = NULL;
	while (curr)
	{
		tmp = curr->next;
		curr->next = tmp_next;
		tmp_next = curr;
		curr = tmp;
	}
	*begin_list = tmp_next;
}
