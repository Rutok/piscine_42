/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 10:53:54 by nboste            #+#    #+#             */
/*   Updated: 2016/09/08 15:45:19 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	char *dst;

	dst = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dst);
}

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

char	*ft_concat_params(int argc, char **argv)
{
	int		t_size;
	int		i;
	char	*str;

	t_size = 0;
	i = 1;
	while (i < argc)
	{
		t_size += ft_strlen(argv[i]) + 1;
		i++;
	}
	str = malloc(sizeof(char) * t_size);
	i = 1;
	while (i < argc && str)
	{
		ft_strcat(str, argv[i]);
		ft_strcat(str, "\n");
		i++;
	}
	if (str)
		str[t_size - 1] = '\0';
	return (str);
}
