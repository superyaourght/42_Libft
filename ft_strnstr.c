/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmastrog <mmastrog@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:12:40 by mmastrog          #+#    #+#             */
/*   Updated: 2022/10/26 00:12:40 by mmastrog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	ix;
	size_t	jx;

	ix = 0;
	if (needle[ix] == '\0')
		return ((char *)haystack);
	while (haystack[ix] != '\0' && len > ix)
	{
		jx = 0;
		while (haystack[ix + jx] == needle[jx] && (jx + ix) < len)
		{
			jx++;
			if (needle[jx] == '\0')
				return ((char *)&haystack[ix]);
		}
		ix++;
	}
	return (NULL);
}
