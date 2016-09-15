/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 22:21:01 by nboste            #+#    #+#             */
/*   Updated: 2016/09/06 22:07:17 by nboste           ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				d_l;
	int				s_l;

	i = 0;
	d_l = ft_strlen(dest);
	s_l = ft_strlen(src);
	while (*dest != '\0')
	{
		i++;
		dest++;
	}
	while (*src != '\0' && i < size - 1)
	{
		i++;
		*dest = *src;
		dest++;
		src++;
	}
	if (*src != '\0' && i == size - 1)
		return (size);
	dest[i] = '\0';
	return (d_l + s_l);
}
