/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 15:35:41 by nboste            #+#    #+#             */
/*   Updated: 2016/09/09 16:05:08 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_length(char **tab)
{
	int i;

	i = 0;
	while (*tab != 0)
	{
		i++;
		tab++;
	}
	return (i);
}

int	ft_compact(char **tab, int length)
{
	int		i;
	int		modif;
	char	**tmp;

	i = 0;
	modif = 1;
	while (modif)
	{
		tmp = tab;
		modif = 0;
		while (i < length)
		{
			if (*tmp == 0 && i < length - 1 && *(tmp + 1) != 0)
			{
				*tmp = *(tmp + 1);
				*(tmp + 1) = 0;
				modif++;
			}
			tmp++;
			i++;
		}
	}
	return (get_length(tab));
}
