/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvuente <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 10:30:56 by mvuente           #+#    #+#             */
/*   Updated: 2020/05/28 21:57:58 by mvuente          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*arr;
	unsigned char	var;
	unsigned int	i;

	i = 0;
	arr = (unsigned char *)src;
	var = (unsigned char)c;
	while (n--)
	{
		if (arr[i] == var)
			return (arr + i);
		i++;
	}
	return (NULL);
}
