/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 18:10:21 by nboste            #+#    #+#             */
/*   Updated: 2016/09/06 14:14:45 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

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
