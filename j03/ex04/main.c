/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 13:04:38 by nboste            #+#    #+#             */
/*   Updated: 2016/09/01 14:43:24 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(int argc, char** argv){

	int div = atoi(argv[1]);
	int mod = atoi(argv[2]);

	argc = argc+1;

	ft_ultimate_div_mod(&div, &mod);

	printf("Div:%d Mod:%d\n", div, mod);

	return 0;
}
