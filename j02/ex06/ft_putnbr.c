/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 18:10:21 by nboste            #+#    #+#             */
/*   Updated: 2016/09/01 11:04:50 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_putnbr(int nb)
{
	int op;
	int old_val;

	op = 10;
	old_val = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	while ((nb / op) >= 10)
	{
		op *= 10;
	}
	if (nb < 10)
		op = 1;
	while (op >= 1)
	{
		ft_putchar(48 + ((nb / op) - old_val));
		old_val += (nb / op) - old_val;
		old_val *= 10;
		op /= 10;
	}
}
