/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 14:56:54 by nboste            #+#    #+#             */
/*   Updated: 2016/09/01 14:59:54 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int main(int argc, char** argv)
{
	argc = argc+1;
	printf("Taille:%d", ft_strlen(argv[1]));

	return (0);
}
