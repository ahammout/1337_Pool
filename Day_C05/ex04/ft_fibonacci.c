/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:39:24 by ahammout          #+#    #+#             */
/*   Updated: 2021/10/06 11:45:24 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	int	fibo;

	if (index < 0)
		return (-1);
	if ((index == 0) || (index == 1))
		return (index);
	else
		fibo = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (fibo);
}
