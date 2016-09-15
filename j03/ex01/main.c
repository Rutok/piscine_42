/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 13:04:38 by nboste            #+#    #+#             */
/*   Updated: 2016/09/01 14:21:05 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(){
	int nbr = 18;

	printf("%d\n", nbr);
	int* a = &nbr;
	int** b = &a;
	int*** c = &b;
	int**** d = &c;
	int***** e = &d;
	int****** f = &e;
	int******* g = &f;
	int******** h = &g;
	ft_ultimate_ft(&h);
	printf("%d\n", nbr);

	return 0;
}
