/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 12:33:31 by skorotko          #+#    #+#             */
/*   Updated: 2017/11/06 12:33:34 by skorotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int ac, char **av)
{
	int i;

	if (ac > 1)
	{
		i = 0;
		while (++i < ac)
		{
			ft_putstr(av[i]);
			ft_putchar('\n');
		}
	}
	return (0);
}
