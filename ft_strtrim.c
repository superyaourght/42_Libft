/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmastrog <mmastrog@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:12:51 by mmastrog          #+#    #+#             */
/*   Updated: 2022/10/26 00:12:51 by mmastrog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_debfin(char const s1, char const *set)
{
	size_t	zdx;

	zdx = 0;
	while (set[zdx] != '\0')
	{
		if (s1 == set[zdx])
			return (1);
		zdx++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rtn;
	size_t	idx;
	size_t	jdx;
	size_t	kdx;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	idx = 0;
	while (s1[idx] != '\0' && ft_debfin(s1[idx], set))
		idx++;
	jdx = ft_strlen(s1);
	while (idx < jdx && ft_debfin(s1[jdx - 1], set))
		jdx--;
	rtn = (char *)malloc(sizeof(char const) * (jdx - idx + 1));
	if (!rtn)
		return (NULL);
	kdx = 0;
	while (idx < jdx)
		rtn[kdx++] = s1[idx++];
	rtn[kdx] = '\0';
	return (rtn);
}
