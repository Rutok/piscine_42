/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 17:13:22 by nboste            #+#    #+#             */
/*   Updated: 2016/09/13 23:39:43 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_str.h"

int		ft_atoi(const char *str)
{
	unsigned int	tmp;
	int				neg;

	neg = 1;
	tmp = 0;
	while ((*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
	|| *str == '\f' || *str == '\r'))
		str++;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		tmp = tmp * 10 + *str - '0';
		str++;
	}
	return ((int)(tmp * neg));
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

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}
