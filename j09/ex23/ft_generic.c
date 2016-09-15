/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 18:23:42 by nboste            #+#    #+#             */
/*   Updated: 2016/09/08 18:47:50 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	disp(void)
{
	int i;

	i = 0;
	ft_putchar('T');
	ft_putchar('u');
	ft_putchar(' ');
	while (i < 3)
	{
		ft_putchar('t');
		ft_putchar('u');
		ft_putchar(' ');
		i++;
	}
}

void	disp_last(void)
{
	int i;

	i = 0;
	ft_putchar('T');
	ft_putchar('u');
	ft_putchar(' ');
	while (i < 2)
	{
		ft_putchar('t');
		ft_putchar('u');
		ft_putchar(' ');
		i++;
	}
	ft_putchar('t');
	ft_putchar('u');
}

void	ft_generic(void)
{
	disp();
	ft_putchar(';');
	ft_putchar(' ');
	disp_last();
	ft_putchar('\n');
}
