/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvuente <mvuente@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 10:30:24 by mvuente           #+#    #+#             */
/*   Updated: 2020/05/26 13:14:37 by mvuente          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int x)
{
	if (x == 32)
		return (64);
	else if ((x >= 33 && x <= 47) || (x >= 58 && x <= 64) ||
			(x >= 91 && x <= 96) || (x >= 123 && x <= 126))
		return (16);
	else if (x >= 48 && x <= 57)
		return (4);
	else if (x >= 65 && x <= 90)
		return (1);
	else if (x >= 97 && x <= 122)
		return (2);
	else
		return (0);
}
