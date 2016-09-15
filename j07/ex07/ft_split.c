/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 14:41:25 by nboste            #+#    #+#             */
/*   Updated: 2016/09/08 15:34:02 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_separator(char a, char *sep)
{
	while (*sep != '\0')
		if (a == *sep++)
			return (1);
	return (0);
}

int		ft_strlen_separator(char *str, char *charset)
{
	int i;

	i = 0;
	while (*str != '\0' && !is_separator(*str, charset))
	{
		str++;
		i++;
	}
	return (i);
}

int		count_words(char *str, char *charset)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && is_separator(*str, charset))
			str++;
		if (*str != '\0')
			count++;
		while (*str != '\0' && !is_separator(*str, charset))
			str++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		nb_words;
	char	**tab;
	char	**ret;
	int		i;
	int		j;

	nb_words = count_words(str, charset);
	tab = malloc(sizeof(char*) * (nb_words + 1));
	ret = tab;
	while (*str != '\0')
	{
		while (*str != '\0' && is_separator(*str, charset))
			str++;
		i = ft_strlen_separator(str, charset);
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
