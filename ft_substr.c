/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmastrog <mmastrog@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:12:54 by mmastrog          #+#    #+#             */
/*   Updated: 2022/10/26 00:12:55 by mmastrog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rtn;
	size_t	idx;

	if (!s)
		return (0);
	idx = ft_strlen(s);
	if (start >= idx)
		start = (unsigned int)idx;
	if (len > idx)
		len = idx;
	idx = 0;
	rtn = (char *)malloc(sizeof(char) * (len + 1));
	if (!rtn)
		return (0);
	while (len > idx && s[start])
	{
		rtn[idx] = s[start];
		idx++;
		start++;
	}
	rtn[idx] = '\0';
	return (rtn);
}
