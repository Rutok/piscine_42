/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 14:56:54 by nboste            #+#    #+#             */
/*   Updated: 2016/09/01 15:18:48 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrev(char *str);

int main(int argc, char** argv)
{
	argc = argc+1;
	printf("Taille:%s", ft_strrev(argv[1]));

	return (0);
}
