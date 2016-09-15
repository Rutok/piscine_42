/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 14:10:50 by nboste            #+#    #+#             */
/*   Updated: 2016/09/13 20:14:55 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	**head;
	char	*tmp;

	i = 0;
	j = 0;
	head = tab;
	while (*tab)
	{
		head = tab + 1;
		while (*head)
		{
			if (cmp(*tab, *head) > 0)
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
