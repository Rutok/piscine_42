/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 09:03:49 by nboste            #+#    #+#             */
/*   Updated: 2016/09/08 15:40:21 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char *cpy;
	char *ret;

	cpy = malloc(sizeof(char) * (ft_strlen(src) + 1));
	ret = cpy;
	while (cpy && *src != '\0')
	{
		*cpy = *src;
		cpy++;
		src++;
	}
	*cpy = *src;
	return (ret);
}
