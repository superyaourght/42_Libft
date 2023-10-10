/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmastrog <mmastrog@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:01:14 by mmastrog          #+#    #+#             */
/*   Updated: 2022/10/26 00:01:18 by mmastrog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bb;
	size_t			index;

	index = 0;
	bb = (unsigned char *)b;
	while (index < len)
	{
		bb[index] = c;
		index++;
	}
	b = bb;
	return (b);
}
