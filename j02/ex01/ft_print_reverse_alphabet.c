/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 09:39:31 by nboste            #+#    #+#             */
/*   Updated: 2016/08/31 11:37:57 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_print_reverse_alphabet(void)
{
	char i;

	i = 122;
	while (i >= 97)
	{
		ft_putchar(i);
		i--;
	}
}
