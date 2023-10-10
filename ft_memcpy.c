/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmastrog <mmastrog@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:11:23 by mmastrog          #+#    #+#             */
/*   Updated: 2022/10/26 00:11:23 by mmastrog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*srcuc;
	unsigned char	*dstuc;
	size_t			index;

	srcuc = (unsigned char *)src;
	dstuc = (unsigned char *)dst;
	index = 0;
	if ((!dst && !src) || (dst == src))
		return (dst);
	while (index < n)
	{
		dstuc[index] = srcuc[index];
		index++;
	}
	return (dst);
}
