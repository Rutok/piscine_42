/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 12:15:29 by nboste            #+#    #+#             */
/*   Updated: 2016/09/12 14:05:50 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_op.h"
#include <unistd.h>

int		are_arg_correct(int agc, char **agv)
{
	char *str;

	str = agv[2];
	if (agc != 4
	|| (*str != '+' && *str != '-'
		&& *str != '*' && *str != '/' && *str != '%')
	|| *str == '\0'
	|| ft_strlen(str) > 1)
		return (0);
	return (1);
}

void	ft_do_math(int a, char op, int b)
{
	t_op_fct	fcts[5];
	int			i;

	i = 0;
	fcts[0].fct = &ft_add;
	fcts[0].op = '+';
	fcts[1].fct = &ft_sub;
	fcts[1].op = '-';
	fcts[2].fct = &ft_mult;
	fcts[2].op = '*';
	fcts[3].fct = &ft_div;
	fcts[3].op = '/';
	fcts[4].fct = &ft_mod;
	fcts[4].op = '%';
	if (ft_check_zero(b, op))
		while (i < 5)
		{
			if (fcts[i].op == op)
				ft_putnbr(fcts[i].fct(a, b));
			i++;
		}
	ft_putchar('\n');
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int		ft_check_zero(int b, char op)
{
	if (!b && op == '/')
	{
		ft_putstr(DIV_ZERO);
		return (0);
	}
	if (!b && op == '%')
	{
		ft_putstr(MOD_ZERO);
		return (0);
	}
	return (1);
}
