/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 13:04:38 by nboste            #+#    #+#             */
/*   Updated: 2016/09/01 13:06:39 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_ft(int *nbr);

int main(){
	int nbr = 18;
	printf("%d\n", nbr);
	ft_ft(&nbr);
	printf("%d\n", nbr);

	return 0;
}
