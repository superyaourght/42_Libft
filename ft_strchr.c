/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmastrog <mmastrog@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:12:02 by mmastrog          #+#    #+#             */
/*   Updated: 2022/10/26 00:12:03 by mmastrog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	conv;

	conv = (char)c;
	while (*s)
	{
		if (*s == conv)
			return ((char *)s);
		s++;
	}
	if (conv == '\0')
		return ((char *)s);
	return (NULL);
}
