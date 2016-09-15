/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 16:56:47 by nboste            #+#    #+#             */
/*   Updated: 2016/09/07 17:16:35 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_print_words_tables(char **tab)
{
	int i;

	if (tab != 0)
		while (*tab != 0)
		{
			i = 0;
			while ((*tab)[i] != '\0' && (*tab)[i] != ' '
			&& (*tab)[i] != '\t' && (*tab)[i] != '\n')
			{
				ft_putchar((*tab)[i]);
				i++;
			}
			ft_putchar('\n');
			tab++;
		}
}
