/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 16:21:21 by rscott            #+#    #+#             */
/*   Updated: 2018/03/05 13:57:03 by rscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	char *dst1;

	dst1 = dst;
	while (*dst1 != '\0')
		dst1++;
	while (*src != '\0')
		*dst1++ = *src++;
	*dst1 = '\0';
	return (dst);
}
