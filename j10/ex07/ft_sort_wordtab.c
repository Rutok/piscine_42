/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 14:10:50 by nboste            #+#    #+#             */
/*   Updated: 2016/09/13 20:08:14 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	char	**head;
	char	*tmp;

	i = 0;
	j = 0;
	while (*tab)
	{
		head = tab + 1;
		while (*head)
		{
			if (ft_strcmp(*tab, *head) > 0)
			{
				tmp = *head;
				*head = *tab;
				*tab = tmp;
			}
			head++;
		}
		tab++;
	}
}
