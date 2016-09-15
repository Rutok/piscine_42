/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 17:36:35 by nboste            #+#    #+#             */
/*   Updated: 2016/09/01 11:00:11 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	print_numbers(char a, char b);

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = 0;
	b = 0;
	while (a < 100)
	{
		b = 0;
		while (b < 100)
		{
			print_numbers(a, b);
			b++;
		}
		a++;
	}
}

void	print_comma(char a, char b)
{
	if (!((a == 98) && (b == 99)))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	print_numbers(char a, char b)
{
	if (a < b)
	{
		if (a < 10)
		{
			ft_putchar('0');
			ft_putchar(a + 48);
		}
		else
		{
			ft_putchar((a / 10) + 48);
			ft_putchar((a % 10) + 48);
		}
		ft_putchar(' ');
		if (b < 10)
		{
			ft_putchar('0');
			ft_putchar(b + 48);
		}
		else
		{
			ft_putchar((b / 10) + 48);
			ft_putchar((b % 10) + 48);
		}
		print_comma(a, b);
	}
}
