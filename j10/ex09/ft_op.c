/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 12:15:29 by nboste            #+#    #+#             */
/*   Updated: 2016/09/13 23:39:30 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_op.h"
#include "ft_opp.h"
#include "ft_str.h"
#include <unistd.h>

int		are_arg_correct(char *op)
{
	int flag;
	int i;

	flag = 0;
	i = 0;
	while (i < 5)
	{
		if (!ft_strcmp(g_opptab[i].op, op))
			flag = 1;
		i++;
	}
	if (!flag)
		return (0);
	return (1);
}

void	ft_do_math(int a, char *op, int b)
{
	int			i;

	i = 0;
	if (!are_arg_correct(op))
	{
		ft_usage(0, 0);
	}
	else if (ft_check_zero(b, op))
	{
		while (i < 5)
		{
			if (!ft_strcmp(g_opptab[i].op, op))
				ft_putnbr(g_opptab[i].fct(a, b));
			i++;
		}
	}
	ft_putchar('\n');
}

int		ft_check_zero(int b, char *op)
{
	if (!b && !ft_strcmp(op, "/"))
	{
		ft_putstr(DIV_ZERO);
		return (0);
	}
	if (!b && !ft_strcmp(op, "%"))
	{
		ft_putstr(MOD_ZERO);
		return (0);
	}
	return (1);
}

int		ft_usage(int a, int b)
{
	int i;

	a++;
	b++;
	ft_putstr("error : only [ ");
	i = 0;
	while (i < 5)
	{
		ft_putstr(g_opptab[i].op);
		ft_putchar(' ');
		i++;
	}
	ft_putstr("] are accepted.");
	return (1);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
