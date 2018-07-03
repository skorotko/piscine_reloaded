/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 12:34:11 by skorotko          #+#    #+#             */
/*   Updated: 2017/11/06 12:34:16 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int		res;

	res = 0;
	while (*str)
	{
		res++;
		str++;
	}
	return (res);
}

char		*ft_strdup(char *src)
{
	int		len;
	char	*res;

	len = ft_strlen(src);
	res = (char *)malloc(len + 1);
	res[len] = '\0';
	while (--len >= 0)
		res[len] = src[len];
	return (res);
}
