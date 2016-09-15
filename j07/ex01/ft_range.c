/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 09:17:30 by nboste            #+#    #+#             */
/*   Updated: 2016/09/08 15:41:20 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int *ret;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	ret = tab;
	while (tab && min < max)
	{
		*tab = min;
		min++;
		tab++;
	}
	return (ret);
}
