/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 11:01:30 by ahammout          #+#    #+#             */
/*   Updated: 2021/09/26 12:02:45 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	long	n;

	n = nbr;
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n <= 9)
	{
		ft_putchar(n + 48);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + 48);
	}
}
