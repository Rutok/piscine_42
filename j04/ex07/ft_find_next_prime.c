/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 16:03:52 by nboste            #+#    #+#             */
/*   Updated: 2016/09/03 13:14:13 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int flag;
	int n;

	n = nb - 1;
	flag = 0;
	if (nb < 2)
		return (0);
	while (n >= 2 && !flag)
	{
		if (!(nb % n))
			flag = 1;
		n--;
	}
	return (!flag);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = nb + 1;
	while (i < 0x7FFFFFFF)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}
