/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 13:48:56 by nboste            #+#    #+#             */
/*   Updated: 2016/09/06 17:49:05 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				s_l;
	char			*tmp;

	tmp = dest;
	i = 0;
	s_l = ft_strlen(src);
	while (*src != '\0' && i < size - 1)
	{
		i++;
		*dest = *src;
		dest++;
		src++;
	}
	tmp[i] = '\0';
	return (s_l);
}
