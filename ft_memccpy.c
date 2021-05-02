/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvuente <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 10:30:41 by mvuente           #+#    #+#             */
/*   Updated: 2020/05/28 15:26:53 by mvuente          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*frst;
	unsigned char	*scnd;
	unsigned char	var;
	int				i;

	i = 0;
	frst = (unsigned char *)src;
	scnd = (unsigned char *)dest;
	var = (unsigned char)c;
	while (n--)
	{
		scnd[i] = frst[i];
		if (frst[i] == var)
			return (scnd + i + 1);
		i++;
	}
	return (NULL);
}
