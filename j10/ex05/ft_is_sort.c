/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 12:02:04 by nboste            #+#    #+#             */
/*   Updated: 2016/09/12 18:55:26 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while (i < length - 1)
	{
		if (f(tab[i + 1], tab[i]) < 0)
			flag = 1;
		i++;
	}
	if (!flag)
		return (1);
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i + 1], tab[i]) > 0)
			flag = 0;
		i++;
	}
	if (flag)
		return (1);
	return (0);
}
