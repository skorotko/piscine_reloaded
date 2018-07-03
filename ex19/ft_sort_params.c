/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 12:33:47 by skorotko          #+#    #+#             */
/*   Updated: 2017/11/06 12:33:53 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int			ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void		ft_swap(char **av, int i)
{
	char	*tmp;

	tmp = av[i];
	av[i] = av[i + 1];
	av[i + 1] = tmp;
}

int			main(int ac, char **av)
{
	int		i;

	if (ac > 1)
	{
		if (ac > 2)
		{
			i = 0;
			while (++i < ac - 1)
				if (ft_strcmp(av[i], av[i + 1]) > 0)
				{
					ft_swap(av, i);
					i = 0;
				}
		}
		i = 0;
		while (++i < ac)
		{
			ft_putstr(av[i]);
			ft_putchar('\n');
		}
	}
	return (0);
}
