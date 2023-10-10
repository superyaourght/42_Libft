/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmastrog <mmastrog@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:12:15 by mmastrog          #+#    #+#             */
/*   Updated: 2022/10/26 00:12:16 by mmastrog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	idx;
	size_t	jdx;
	size_t	sl;
	char	*rtn;

	idx = 0;
	sl = ft_strlen(s1) + ft_strlen(s2);
	rtn = (char *)malloc(sizeof(char) * (sl + 1));
	if (!rtn)
		return (NULL);
	while (idx < ft_strlen(s1))
	{
		rtn[idx] = s1[idx];
		idx++;
	}
	jdx = 0;
	while (idx < sl)
	{
		rtn[idx] = s2[jdx];
		idx++;
		jdx++;
	}
	rtn[idx] = '\0';
	return (rtn);
}
