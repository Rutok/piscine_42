/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 12:08:02 by nboste            #+#    #+#             */
/*   Updated: 2016/09/12 13:49:07 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_op.h"

int		main(int argc, char **argv)
{
	if (are_arg_correct(argc, argv))
		ft_do_math(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]));
	else if (argc > 1)
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
	return (0);
}
