/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:12:12 by ahammout          #+#    #+#             */
/*   Updated: 2021/10/13 19:09:59 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1 ++;
		s2 ++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i ++;
	}
}

void	ft_sort(char **s1, int n_arg)
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	while (i <= n_arg)
	{
		j = i;
		while (j <= n_arg)
		{
			if (ft_strcmp(s1[i], s1[j]) > 0)
			{
				swap = s1[i];
				s1[i] = s1[j];
				s1[j] = swap;
			}
			j ++;
		}
		i ++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	l;

	i = 1;
	l = ac - 1;
	ft_sort(av, l);
	while (i <= l)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i ++;
	}
	return (0);
}
