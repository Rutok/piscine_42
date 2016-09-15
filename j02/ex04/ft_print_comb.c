/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 12:15:39 by nboste            #+#    #+#             */
/*   Updated: 2016/09/01 11:31:19 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char a);

static void	print_chars(int a, int b, int c);

void		ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			c = 0;
			while (c <= 9)
			{
				if (a < b && b < c)
				{
					print_chars(a, b, c);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

static void	print_chars(int a, int b, int c)
{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(c + 48);
	if (!((a == 7) && (b == 8) && (c = 9)))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
