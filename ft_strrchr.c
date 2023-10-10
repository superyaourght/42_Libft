/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmastrog <mmastrog@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:12:43 by mmastrog          #+#    #+#             */
/*   Updated: 2022/10/26 00:12:44 by mmastrog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	conv;
	int		idx;

	conv = (char)c;
	idx = 0;
	while (*s)
	{
		s++;
		idx++;
	}
	while (idx >= 0)
	{
		if (*s == conv)
			return ((char *)s);
		s--;
		idx--;
	}
	if (conv == '\0')
		return ((char *)s);
	return (NULL);
}
