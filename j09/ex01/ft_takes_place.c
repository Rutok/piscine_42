/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 18:49:18 by nboste            #+#    #+#             */
/*   Updated: 2016/09/08 19:28:24 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	startam(int hour)
{
	if (!hour)
		hour = 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND ", hour);
	if (hour == 12)
		printf("1.00 A.M.");
	else if (hour == 11)
		printf("12.00 P.M.");
	else
		printf("%d.00 A.M.", hour + 1);
}

void	startpm(int hour)
{
	if (hour != 12)
		hour = hour - 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND ", hour);
	if (hour == 12)
		printf("1.00 P.M.");
	else if (hour == 11)
		printf("12.00 A.M.");
	else
		printf("%d.00 P.M.", hour + 1);
}

void	ft_takes_place(int hour)
{
	if (hour < 12)
	{
		startam(hour);
	}
	else
	{
		startpm(hour);
	}
	printf("\n");
}
