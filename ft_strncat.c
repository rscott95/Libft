/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 12:26:42 by rscott            #+#    #+#             */
/*   Updated: 2018/02/28 12:57:31 by rscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	char *dstout;

	dstout = dst;
	while (*dstout != '\0')
		dstout++;
	while (n-- > 0 && *src != '\0')
		*dstout++ = *src++;
	*dstout = '\0';
	return (dst);
}
