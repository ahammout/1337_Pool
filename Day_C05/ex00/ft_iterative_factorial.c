/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:28:24 by ahammout          #+#    #+#             */
/*   Updated: 2021/10/06 18:15:40 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 2;
	if ((nb == 0) || (nb == 1))
	{
		fact = 1;
	}
	if (nb < 0)
	{
		return (0);
	}
	fact = 1;
	while (i <= nb)
	{
		fact = i * fact;
		i ++;
	}
	return (fact);
}
