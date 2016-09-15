/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:57:44 by nboste            #+#    #+#             */
/*   Updated: 2016/09/13 16:07:08 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *next;
	t_list *curr;

	next = *begin_list;
	while (next)
	{
		curr = next;
		next = curr->next;
		free(curr);
	}
	*begin_list = NULL;
}
