/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 09:17:25 by nboste            #+#    #+#             */
/*   Updated: 2016/09/01 11:10:45 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

int		check_last(char *tab, int n);

void	increment(char *tab, int n)
{
	if ((n >= 2) && (tab[n - 1] == 9))
	{
		tab[n - 1] = 0;
		increment(tab, n - 1);
	}
	else
		tab[n - 1]++;
}

void	print_value(char *tab, int n)
{
	int pos;

	pos = n;
	while ((pos - 2 >= 0) && (tab[pos - 1] > tab[pos - 2]))
	{
		pos--;
	}
	if (pos == 1)
	{
		pos = 0;
		while (pos < n)
		{
			ft_putchar(48 + tab[pos]);
			pos++;
		}
		if (!check_last(tab, n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

int		check_last(char *tab, int n)
{
	int val;

	val = 9;
	while (val >= 0 && n > 0)
	{
		if (tab[n - 1] != val)
			return (0);
		val--;
		n--;
	}
	return (1);
}

void	ft_print_combn(int n)
{
	char	tab[10];
	int		nb;

	nb = n;
	while (nb > 0)
	{
		tab[nb - 1] = 0;
		nb--;
	}
	nb = 0;
	while (!nb)
	{
		nb = check_last(tab, n);
		print_value(tab, n);
		if (!nb)
		{
			increment(tab, n);
		}
	}
}
