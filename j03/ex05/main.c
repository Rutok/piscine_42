/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 13:04:38 by nboste            #+#    #+#             */
/*   Updated: 2016/09/01 14:52:23 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr(char* str);

int main(int argc, char** argv){

	argc = argc+1;

	ft_putstr(argv[1]);

	return 0;
}