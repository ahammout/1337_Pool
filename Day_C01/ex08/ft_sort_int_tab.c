/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:25:38 by ahammout          #+#    #+#             */
/*   Updated: 2021/09/28 17:45:47 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1 ;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				c = tab[j];
				tab[j] = tab[i];
				tab[i] = c ;
			}
			j ++ ;
		}
		i ++;
	}
}
