/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:12:48 by ahammout          #+#    #+#             */
/*   Updated: 2021/10/09 14:16:31 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i ++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	l;

	i = 1;
	l = ac - 1;
	while (l >= i)
	{
		ft_putstr(av[l]);
		write(1, "\n", 1);
		l --;
	}
	return (0);
}
