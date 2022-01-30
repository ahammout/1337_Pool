/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:13:25 by ahammout          #+#    #+#             */
/*   Updated: 2021/10/13 11:19:40 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	arr = (int *) malloc(sizeof (int) * (max - min));
	if (arr == NULL)
		return (0);
	while (min < max)
	{
		arr[i] = min;
		min ++;
		i ++;
	}
	return (arr);
}
