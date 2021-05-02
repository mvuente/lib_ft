/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvuente <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 10:34:05 by mvuente           #+#    #+#             */
/*   Updated: 2020/05/29 21:41:12 by mvuente          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	litlen;
	char	*res;

	res = (char *)big;
	litlen = ft_strlen(little);
	if (!*little)
		return (res);
	if (len < litlen || litlen > ft_strlen(big))
		return (NULL);
	while (len-- >= litlen)
	{
		if (ft_memcmp(res, little, litlen) == 0)
			return (res);
		res++;
	}
	return (NULL);
}
