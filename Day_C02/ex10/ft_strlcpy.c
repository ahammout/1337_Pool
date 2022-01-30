/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:32:28 by ahammout          #+#    #+#             */
/*   Updated: 2021/10/14 12:45:31 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0' )
	{
		index ++;
	}
	return (index);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (src[index] != '\0' && index < size - 1 && size != 0)
	{
		dest[index] = src[index];
		index ++;
	}
	if (size != '\0')
	{
		dest[index] = '\0';
		index ++;
	}
	return (ft_strlen(src));
}
