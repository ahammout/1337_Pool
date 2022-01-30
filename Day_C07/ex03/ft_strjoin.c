/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:48:36 by ahammout          #+#    #+#             */
/*   Updated: 2021/10/13 19:25:27 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i ++;
	}
	return (i);
}

int	ft_len_strs(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i ++;
	}
	len += (size - 1) * ft_strlen(sep);
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	end;

	i = 0;
	end = ft_strlen(dest);
	while (src[i])
	{
		dest[end + i] = src[i];
		i ++;
	}
	dest[end + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		x;
	int		i;
	char	*str;

	i = 0;
	x = ft_len_strs(size, strs, sep);
	str = (char *) malloc (sizeof (char) * x);
	if (str == NULL)
		return (0);
	str[0] = '\0';
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i < size - 1)
		{
			str = ft_strcat(str, sep);
		}
		i ++;
	}
	return (str);
}
/*int main()
{
	char *S[]={"This","string","is","separeted","by","a","coma"};
	char sep[]= "***";
	printf("%s\n",ft_strjoin(4,S,sep));
	return (0);
}*/
