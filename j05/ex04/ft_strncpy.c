/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 14:53:11 by nboste            #+#    #+#             */
/*   Updated: 2016/09/06 21:16:35 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *dst;

	dst = dest;
	while (*dst != '\0' && *src != '\0' && n > 0)
	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
	while (n > 0 && *dst != '\0')
	{
		*dst = '\0';
		dst++;
		n--;
	}
	return (dest);
}
