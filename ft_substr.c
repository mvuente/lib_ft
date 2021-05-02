/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvuente <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 10:36:57 by mvuente           #+#    #+#             */
/*   Updated: 2020/05/28 22:15:32 by mvuente          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_length(size_t a, size_t b, size_t c)
{
	if (a <= b)
		return (a);
	else
		return (c);
}

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	smbnmb;
	size_t	reslen;

	if (s == NULL)
		return (NULL);
	smbnmb = ft_strlen(s);
	if (start > smbnmb || len == 0 || s[0] == '\0')
	{
		if (!(res = (char *)malloc(1)))
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	reslen = ft_length(len, smbnmb, smbnmb - start);
	if (!(res = (char *)malloc(sizeof(char) * reslen + 1)))
		return (NULL);
	res = ft_memmove(res, (s + start), reslen);
	res[reslen] = '\0';
	return (res);
}
