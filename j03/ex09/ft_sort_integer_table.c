/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 16:37:54 by nboste            #+#    #+#             */
/*   Updated: 2016/09/02 11:30:18 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int head;
	int i;
	int tmp;

	head = 0;
	while (head < size - 1)
	{
		i = head + 1;
		while (i < size)
		{
			if (tab[i] < tab[head])
			{
				tmp = tab[i];
				tab[i] = tab[head];
				tab[head] = tmp;
				i = head;
			}
			i++;
		}
		head++;
	}
}
