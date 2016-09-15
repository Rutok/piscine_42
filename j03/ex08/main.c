/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 14:56:54 by nboste            #+#    #+#             */
/*   Updated: 2016/09/02 23:16:44 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

int main(int argc, char** argv)
{
	argc = argc+1;
	printf("%d\n%d\n", ft_atoi(argv[1]), atoi(argv[1]));

	return (0);
}
