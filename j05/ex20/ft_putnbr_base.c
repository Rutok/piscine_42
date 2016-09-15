/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 22:16:17 by nboste            #+#    #+#             */
/*   Updated: 2016/09/06 22:51:25 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

int		is_base_valid(char *base)
{
	char *curr;
	char *head;

	if (*base == '\0' || *(base + 1) == '\0')
		return (0);
	head = base + 1;
	curr = base;
	while (*curr != '\0')
	{
		while (*head != '\0')
		{
			if (*curr == *head || *head == '+'
			|| *head == '-' || *head < 33 || *head > 127)
				return (0);
			head++;
		}
		curr++;
		head = curr + 1;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	unsigned int val;
	unsigned int base_size;

	base_size = (unsigned int)ft_strlen(base);
	if (!is_base_valid(base))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		val = nb * -1;
	}
	else
	{
		val = nb;
	}
	if (val > base_size - 1)
	{
		ft_putnbr_base(val / base_size, base);
		ft_putchar(base[val % base_size]);
	}
	else
	{
		ft_putchar(base[val]);
	}
}
