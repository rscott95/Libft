/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 15:24:07 by rscott            #+#    #+#             */
/*   Updated: 2018/02/26 15:39:29 by rscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *buffer1, const void *buffer2, size_t count)
{
	unsigned char *strbuff1;
	unsigned char *strbuff2;

	strbuff1 = (unsigned char *)buffer1;
	strbuff2 = (unsigned char *)buffer2;
	while (count > 0 && *strbuff1 == *strbuff2)
	{
		strbuff1++;
		strbuff2++;
		count--;
	}
	if (count == 0)
		return (0);
	else
		return (*strbuff1 - *strbuff2);
}
