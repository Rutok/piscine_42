/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 18:53:44 by nboste            #+#    #+#             */
/*   Updated: 2016/09/08 15:38:17 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_rank(char a, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (a == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_pow(int nb, int power)
{
	if (power < 0)
		return (0);
	if (!power)
		return (1);
	return (nb * ft_pow(nb, power - 1));
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

char	*dec_to_base(int nb, char *base, int neg)
{
	unsigned int	val;
	unsigned int	base_size;
	static int		pos;
	static char		*result;

	if (!pos)
		result = malloc(sizeof(char) * 33);
	base_size = 0;
	while (base[base_size] != '\0')
		base_size++;
	if (neg)
		result[pos++] = '-';
	val = nb;
	if (val > base_size - 1)
	{
		dec_to_base(val / base_size, base, 0);
		result[pos++] = base[val % base_size];
	}
	else
		result[pos++] = base[val];
	result[pos] = '\0';
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	static int		bf_s;
	unsigned int	dec;
	static int		i;
	static int		j;
	static int		neg;

	if (!is_base_valid(base_from) || !is_base_valid(base_to))
		return (NULL);
	while (nbr[i] != '\0')
		i++;
	i -= 1;
	neg = (*nbr == '-') ? 1 : 0;
	if (*nbr == '-' || *nbr == '+')
	{
		neg += 0x10000;
		nbr++;
	}
	dec = 0;
	while (base_from[bf_s] != '\0')
		bf_s++;
	while (i >= (neg >> 16))
		dec += get_rank(nbr[i-- - (neg >> 16)], base_from) * ft_pow(bf_s, j++);
	return (dec_to_base(dec, base_to, neg & 0x1));
}
