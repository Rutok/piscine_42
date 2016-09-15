/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 12:44:47 by nboste            #+#    #+#             */
/*   Updated: 2016/09/12 14:03:58 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OP_H
# define FT_OP_H

# define DIV_ZERO "Stop : division by zero"
# define MOD_ZERO "Stop : modulo by zero"

typedef struct	s_op_fct
{
	int		(*fct)(int, int);
	char	op;
}				t_op_fct;

int				are_arg_correct(int agc, char **agv);

void			ft_do_math(int a, char op, int b);

int				ft_add(int a, int b);

int				ft_sub(int a, int b);

int				ft_mult(int a, int b);

int				ft_div(int a, int b);

int				ft_mod(int a, int b);

int				ft_atoi(const char *str);

void			ft_putnbr(int nb);

void			ft_putchar(char a);

void			ft_putstr(char *a);

int				ft_strlen(char *str);

int				ft_check_zero(int b, char op);

#endif
