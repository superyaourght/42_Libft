/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmastrog <mmastrog@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:11:40 by mmastrog          #+#    #+#             */
/*   Updated: 2022/11/09 17:09:01 by superyao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		idx;
	char	nl;

	idx = 0;
	nl = '\n';
	while (s[idx] != '\0')
	{
		ft_putchar_fd(s[idx], fd);
		idx++;
	}
	ft_putchar_fd(nl, fd);
}
