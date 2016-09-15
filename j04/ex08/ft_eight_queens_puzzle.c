/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 09:40:04 by nboste            #+#    #+#             */
/*   Updated: 2016/09/03 21:07:40 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	abs(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}

int	is_free(int *tab, int x, int y)
{
	int i;

	i = 0;
	while (i < y)
	{
		if ((tab[i] == x) || (abs(tab[i] - x) == abs(i - y)))
			return (0);
		i++;
	}
	return (1);
}

int	recursive(int *queens_pos, int nb_queen)
{
	int			i;
	static int	nb_sol;

	i = 0;
	if (nb_queen == 8)
	{
		nb_sol++;
	}
	else
	{
		while (i < 8)
		{
			if (is_free(queens_pos, i, nb_queen))
			{
				queens_pos[nb_queen] = i;
				recursive(queens_pos, nb_queen + 1);
			}
			i++;
		}
	}
	return (nb_sol);
}

int	ft_eight_queens_puzzle(void)
{
	int queens_pos[8];

	return (recursive(queens_pos, 0));
}
