/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 10:37:15 by nboste            #+#    #+#             */
/*   Updated: 2016/09/02 11:03:33 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	static int step;
	static int result;
	static int old_value;
	static int old_old_value;

	if (index < 0)
		return (-1);
	if (!index)
		return (0);
	if (index == 1)
		return (1);
	if (step <= index)
	{
		if (step == 2)
		{
			old_value = 1;
			old_old_value = 0;
		}
		result = old_value + old_old_value;
		old_old_value = old_value;
		old_value = result;
		step++;
		return (ft_fibonacci(index));
	}
	return (result);
}
