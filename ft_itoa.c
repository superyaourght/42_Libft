/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmastrog <mmastrog@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:10:43 by mmastrog          #+#    #+#             */
/*   Updated: 2022/11/09 00:52:52 by superyao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_val(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (1);
}

static size_t	ft_long(int n)
{
	size_t	rtn;
	long	conv;

	rtn = 0;
	conv = (long)n;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		rtn++;
		conv = -conv;
	}
	while (conv > 0)
	{
		conv = conv / 10;
		rtn++;
	}
	return (rtn);
}

static void	ft_rtn(int val, size_t lng, char *rtn, int n)
{
	long	conv;

	rtn[lng] = '\0';
	conv = (long)n;
	if (val < 0)
	{
		rtn[0] = '-';
		conv = -conv;
	}
	else if (val == 0)
		rtn[0] = '0';
	while (conv != 0)
	{
		lng--;
		rtn[lng] = conv % 10 + 48;
		conv /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		val;
	size_t	lng;
	char	*rtn;

	if (!n && n != 0)
		return (NULL);
	val = ft_val(n);
	lng = ft_long(n);
	rtn = (char *)malloc(sizeof(char) * (lng + 1));
	if (!rtn)
		return (NULL);
	ft_rtn(val, lng, rtn, n);
	return (rtn);
}
