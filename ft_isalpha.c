/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvuente <mvuente@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 10:29:29 by mvuente           #+#    #+#             */
/*   Updated: 2020/05/26 10:29:29 by mvuente          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int x)
{
	if (x >= 65 && x <= 90)
		return (1);
	else if (x >= 97 && x <= 122)
		return (2);
	else
		return (0);
}