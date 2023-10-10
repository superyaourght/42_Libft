/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmastrog <mmastrog@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:12:33 by mmastrog          #+#    #+#             */
/*   Updated: 2022/11/09 15:58:23 by superyao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	idx;
	char			*rtn;
	size_t			jdx;

	if (!s || !f)
		return (NULL);
	idx = 0;
	jdx = ft_strlen(s);
	rtn = (char *)malloc(sizeof(char) * (jdx + 1));
	if (!rtn)
		return (NULL);
	while (s[idx] != '\0')
	{
		rtn[idx] = f(idx, s[idx]);
		idx++;
	}
	rtn[idx] = '\0';
	return (rtn);
}
