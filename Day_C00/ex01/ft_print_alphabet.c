/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 07:30:48 by ahammout          #+#    #+#             */
/*   Updated: 2021/09/24 07:32:14 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	x;	

	x = 'a';
	while (x <= 'z')
	{
		ft_putchar (x);
		x++;
	}
}
