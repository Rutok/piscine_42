/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 13:35:37 by nboste            #+#    #+#             */
/*   Updated: 2016/09/09 13:54:35 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base % 2)
		base = base * 3 + 1;
	else
		base /= 2;
	if (base != 1)
		return (1 + ft_collatz_conjecture(base));
	return (1);
}
