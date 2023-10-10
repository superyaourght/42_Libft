/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmastrog <mmastrog@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:12:19 by mmastrog          #+#    #+#             */
/*   Updated: 2022/10/26 00:12:20 by mmastrog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	idx;
	size_t	ds;

	ds = 0;
	while (dst[ds] != '\0' && ds < dstsize)
		ds++;
	idx = ds;
	while (src[ds - idx] && ds + 1 < dstsize)
	{
		dst[ds] = src[ds - idx];
		ds++;
	}
	if (idx < dstsize)
		dst[ds] = '\0';
	return (idx + ft_strlen(src));
}
