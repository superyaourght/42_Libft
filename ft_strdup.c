/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmastrog <mmastrog@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:12:07 by mmastrog          #+#    #+#             */
/*   Updated: 2022/10/26 00:12:07 by mmastrog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	sl;
	char	*str;

	sl = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * (sl + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, sl);
	str[sl] = '\0';
	return (str);
}
