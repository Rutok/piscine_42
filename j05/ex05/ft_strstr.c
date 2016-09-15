/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 16:46:54 by nboste            #+#    #+#             */
/*   Updated: 2016/09/06 18:08:12 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *found;
	char *tmp;

	found = 0;
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		tmp = to_find;
		if (found)
			str = found + 1;
		while (*str != '\0' && *tmp != *str)
			str++;
		found = str;
		while (*str == *tmp && *tmp != '\0' && *str != '\0')
		{
			str++;
			tmp++;
		}
		if (*tmp == '\0')
			return (found);
	}
	return (0);
}
