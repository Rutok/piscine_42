/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 13:04:38 by nboste            #+#    #+#             */
/*   Updated: 2016/09/01 14:34:59 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(int argc, char** argv){

	int div;
	int mod;
	argc = argc+1;
	ft_div_mod(atoi(argv[1]), atoi(argv[2]), &div, &mod);

	printf("Div:%d Mod:%d\n", div, mod);

	return 0;
}
