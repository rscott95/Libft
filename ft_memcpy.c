/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:23:53 by rscott            #+#    #+#             */
/*   Updated: 2018/02/23 16:29:57 by rscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *to, const void *from, size_t count)
{
	unsigned char *s1;
	unsigned char *s2;

	if (!count || (!to && !from))
		return (to);
	s1 = (unsigned char*)to;
	s2 = (unsigned char*)from;
	while (count--)
		*s1++ = *s2++;
	return (to);
}
