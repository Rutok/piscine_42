/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 10:39:48 by nboste            #+#    #+#             */
/*   Updated: 2016/09/06 10:41:18 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

int		main(int argc, char **argv)
{
	while (argc > 1)
	{
		while (*argv[argc - 1] != '\0')
		{
			ft_putchar(*argv[argc - 1]);
			argv[argc - 1]++;
		}
		argc--;
		ft_putchar('\n');
	}
	return (0);
}
