/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 14:35:38 by rscott            #+#    #+#             */
/*   Updated: 2018/03/01 15:24:10 by rscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	const char *needle;
	const char *haystack;

	if (*s2 == '\0')
		return ((char*)s1);
	while (*s1 != '\0')
	{
		needle = s1;
		haystack = s2;
		while (*haystack != '\0' && *needle == *haystack)
		{
			needle++;
			haystack++;
		}
		if (*haystack == '\0')
			return ((char*)s1);
		s1++;
	}
	return (NULL);
}
