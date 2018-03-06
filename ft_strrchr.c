/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 14:20:54 by rscott            #+#    #+#             */
/*   Updated: 2018/03/01 14:23:42 by rscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char *last_pos;

	last_pos = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last_pos = (char*)s;
		s++;
	}
	if (*s == (char)c)
		return ((char*)s);
	else
		return (last_pos);
}
