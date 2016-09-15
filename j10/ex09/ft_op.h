/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 12:44:47 by nboste            #+#    #+#             */
/*   Updated: 2016/09/13 22:37:08 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OP_H
# define FT_OP_H

# define DIV_ZERO "Stop : division by zero"
# define MOD_ZERO "Stop : modulo by zero"

typedef struct	s_opp
{
	char	op[256];
	int		(*fct)(int, int);
}				t_opp;

int				are_arg_correct(char *agv);

void			ft_do_math(int a, char *op, int b);

int				ft_add(int a, int b);

int				ft_sub(int a, int b);

int				ft_mul(int a, int b);

int				ft_div(int a, int b);

int				ft_mod(int a, int b);

int				ft_check_zero(int b, char *op);

int				ft_usage(int a, int b);

#endif
