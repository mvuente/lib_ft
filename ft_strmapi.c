/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvuente <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 10:36:35 by mvuente           #+#    #+#             */
/*   Updated: 2020/05/28 20:59:16 by mvuente          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	res = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (res == NULL)
		return (NULL);
	else
	{
		while (s[i])
		{
			res[i] = f(i, s[i]);
			++i;
		}
		res[i] = '\0';
		return (res);
	}
}
