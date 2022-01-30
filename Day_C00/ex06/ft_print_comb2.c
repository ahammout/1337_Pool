/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:12:02 by ahammout          #+#    #+#             */
/*   Updated: 2021/09/26 11:57:41 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		fnum;
	int		snum;

	fnum = 0;
	while (fnum <= 98)
	{
		snum = fnum + 1;
		while (snum <= 99)
		{
			ft_putchar((fnum / 10) + 48);
			ft_putchar((fnum % 10) + 48);
			ft_putchar(' ');
			ft_putchar((snum / 10) + 48);
			ft_putchar((snum % 10) + 48);
			if (fnum == 98)
				break ;
			ft_putchar(',');
			ft_putchar(' ');
			snum ++;
		}
		fnum ++;
	}
}
