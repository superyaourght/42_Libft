/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmastrog <mmastrog@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:11:26 by mmastrog          #+#    #+#             */
/*   Updated: 2022/10/26 00:11:27 by mmastrog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstuc;
	unsigned char	*srcuc;
	size_t			index;

	index = len;
	dstuc = (unsigned char *)dst;
	srcuc = (unsigned char *)src;
	if (!src && !dst)
		return (dst);
	if (dst > src)
		while (index--)
			dstuc[index] = srcuc[index];
	else
		while (index--)
			*dstuc++ = *srcuc++;
	return (dst);
}
