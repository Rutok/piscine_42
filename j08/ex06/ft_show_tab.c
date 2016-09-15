/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 16:12:24 by nboste            #+#    #+#             */
/*   Updated: 2016/09/09 16:31:28 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_print_words_tables(char **tab)
{
	int i;

	if (tab != 0)
		while (*tab != 0)
		{
			i = 0;
			while ((*tab)[i] != '\0' && (*tab)[i] != ' '
			&& (*tab)[i] != '\t' && (*tab)[i] != '\n')
			{
				ft_putchar((*tab)[i]);
				i++;
			}
			ft_putchar('\n');
			tab++;
		}
}

void	ft_putnbr(int nb)
{
	unsigned int val;

	if (nb < 0)
	{
		ft_putchar('-');
		val = nb * -1;
	}
	else
	{
		val = nb;
	}
	if (val > 9)
	{
		ft_putnbr(val / 10);
		ft_putchar(val % 10 + '0');
	}
	else
	{
		ft_putchar(val + '0');
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	while (par->str)
	{
		ft_putstr(par->copy);
		ft_putchar('\n');
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		ft_print_words_tables(par->tab);
		par++;
	}
}
