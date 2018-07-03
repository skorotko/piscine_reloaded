/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 12:34:44 by skorotko          #+#    #+#             */
/*   Updated: 2017/11/06 12:34:50 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	size;
	int	*range;

	if (min < max)
	{
		size = max - min;
		if ((range = malloc(sizeof(int) * size)) != NULL)
		{
			while (--size >= 0)
				range[size] = --max;
			return (range);
		}
	}
	return (NULL);
}
