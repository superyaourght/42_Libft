/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmastrog <mmastrog@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:11:58 by mmastrog          #+#    #+#             */
/*   Updated: 2022/11/10 01:54:15 by superyao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_sec(char const *s, char c)
{
	size_t	idx;
	size_t	jdx;
	size_t	rtn;

	idx = 0;
	jdx = 0;
	rtn = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] != c && jdx == 0)
		{
			jdx = 1;
			rtn++;
		}
		else if (s[idx] == c)
			jdx = 0;
		idx++;
	}
	return (rtn);
}

static size_t	ft_cps(char const *s, size_t idx, char c)
{
	size_t	rtn;

	rtn = 0;
	while (s[idx] != c && s[idx] != '\0')
	{
		rtn++;
		idx++;
	}
	return (rtn);
}

static char	**ft_free(char **rtn, size_t jdx)
{	
	while (jdx >= 0 && rtn[jdx] != NULL)
	{
		free(rtn[jdx]);
		rtn[jdx] = NULL;
		jdx--;
	}
	free(rtn);
	rtn = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**rtn;
	size_t	idx;
	size_t	jdx;
	size_t	kdx;

	idx = 0;
	jdx = 0;
	if (s == 0)
		return (NULL);
	rtn = (char **)malloc(sizeof(char *) * (ft_sec(s, c) + 1));
	if (!rtn)
		return (NULL);
	while (jdx < ft_sec(s, c))
	{
		while (s[idx] == c && s[idx] != '\0')
			idx++;
		kdx = ft_cps(s, idx, c);
		rtn[jdx] = ft_substr(&s[idx], 0, kdx);
		if (!rtn[jdx])
			return (ft_free(rtn, jdx));
		idx = idx + kdx;
		jdx++;
	}
	rtn[jdx] = NULL;
	return (rtn);
}
