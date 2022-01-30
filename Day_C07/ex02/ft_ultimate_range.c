/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:24:27 by ahammout          #+#    #+#             */
/*   Updated: 2021/10/13 11:21:22 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*t;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	t = (int *) malloc(sizeof(int) * max - min);
	if (t == NULL)
		return (0);
	while (min < max)
	{
		t[i] = min;
		min ++;
		i ++;
	}
	*range = t;
	return (i);
}
