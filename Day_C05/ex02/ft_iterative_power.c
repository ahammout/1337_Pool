/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:03:32 by ahammout          #+#    #+#             */
/*   Updated: 2021/10/07 18:34:14 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	if (power < 0)
	{
		return (0);
	}
	else if ((nb >= 0) || (power >= 0))
	{
		while (i < power)
		{
			res = res * nb;
			i ++;
		}
	}
	return (res);
}
