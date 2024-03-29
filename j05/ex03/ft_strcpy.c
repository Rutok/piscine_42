/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 14:35:36 by nboste            #+#    #+#             */
/*   Updated: 2016/09/05 14:51:44 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char *dst;

	dst = dest;
	while (*src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = *src;
	return (dest);
}
