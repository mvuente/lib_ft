/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvuente <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 10:36:47 by mvuente           #+#    #+#             */
/*   Updated: 2020/05/28 22:01:03 by mvuente          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s, const char *set)
{
	char	*res;
	size_t	i;
	size_t	j;

	if (s == NULL || set == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s);
	while (s[i] && ft_memchr(set, s[i], ft_strlen(set)) != NULL)
		i++;
	while (s[j - 1] && ft_memchr(set, s[j - 1], ft_strlen(set)) != NULL)
		j--;
	if (j < i)
		j = i;
	if (!(res = (char *)malloc(sizeof(char) * (j - i) + 1)))
		return (NULL);
	if (j > i)
		ft_memcpy(res, s + i, j - i);
	res[j - i] = '\0';
	return (res);
}
