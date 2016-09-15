/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 14:35:49 by nboste            #+#    #+#             */
/*   Updated: 2016/09/08 14:28:17 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen_ws(char *str)
{
	int i;

	i = 0;
	while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
	{
		str++;
		i++;
	}
	return (i);
}

int		count_words(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && (*str == ' ' || *str == '\t' || *str == '\n'))
			str++;
		if (*str != '\0')
			count++;
		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			str++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	int		nb_words;
	char	**tab;
	char	**ret;
	int		i;
	int		j;

	nb_words = count_words(str);
	tab = malloc(sizeof(char*) * (nb_words + 1));
	ret = tab;
	while (*str != '\0')
	{
		while (*str != '\0' && (*str == ' ' || *str == '\t' || *str == '\n'))
			str++;
		i = ft_strlen_ws(str);
		*tab = malloc(sizeof(char) * (i + 1));
		j = 0;
		if (*str != '\0')
		{
			while (j < i)
				(*tab)[j++] = *str++;
			(*tab++)[i] = '\0';
		}
	}
	*tab = 0;
	return (ret);
}
