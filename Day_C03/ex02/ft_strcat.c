/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 18:23:06 by ahammout          #+#    #+#             */
/*   Updated: 2021/10/04 12:37:04 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(dest);
	while (src[i] != '\0' )
	{
		dest[size + i] = src[i];
		i ++;
	}
	dest[size + i] = '\0';
	return (dest);
}
