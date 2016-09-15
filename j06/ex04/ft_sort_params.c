/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 10:45:08 by nboste            #+#    #+#             */
/*   Updated: 2016/09/06 11:49:58 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	swap_or_not(char *tab[], int *i, int *j)
{
	char	*tmp;
	int		k;

	k = 0;
	if (*tab[*j] == *tab[*i])
	{
		while (tab[*j][k] != '\0'
		&& tab[*i][k] != '\0'
		&& tab[*j][k] == tab[*i][k])
			k++;
	}
	if (tab[*j][k] < tab[*i][k])
	{
		tmp = tab[*j];
		tab[*j] = tab[*i];
		tab[*i] = tmp;
		*j = *i + 1;
	}
}

void	sort_ascii(char *tab[], int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			swap_or_not(tab, &i, &j);
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	sort_ascii(argv + 1, argc - 1);
	i = 1;
	while (i < argc)
	{
		while (*argv[i] != '\0')
		{
			ft_putchar(*argv[i]);
			argv[i]++;
		}
		i++;
		ft_putchar('\n');
	}
	return (0);
}
