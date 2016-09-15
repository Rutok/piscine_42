/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 15:02:47 by nboste            #+#    #+#             */
/*   Updated: 2016/09/01 15:33:05 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*recursive_rev(char *str, int size);

char	*ft_strrev(char *str)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = str;
	while (*tmp != '\0')
	{
		i++;
		tmp++;
	}
	recursive_rev(str, i);
	return (str);
}

char	*recursive_rev(char *str, int size)
{
	char		tmp;
	static char	*head;

	head = str;
	if (size <= 1)
		return (str);
	else
	{
		tmp = *head;
		*head = head[size - 1];
		head[size - 1] = tmp;
		head++;
		return (recursive_rev(head, size - 2));
	}
}
