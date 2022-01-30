/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:44:23 by ahammout          #+#    #+#             */
/*   Updated: 2021/10/07 19:00:36 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;
	int	flag;

	flag = 0;
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			flag = 1;
			break ;
		}
		i ++;
	}
	if (nb <= 1)
		return (0);
	else
	{
		if (flag == 0)
			return (1);
		else
			return (0);
	}
	return (0);
}
