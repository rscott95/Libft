/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 13:08:44 by rscott            #+#    #+#             */
/*   Updated: 2018/02/23 13:30:38 by rscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	const char *str_end;

	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == ',' || *s == '\n' || *s == '\t')
		s++;
	if (*s == '\0')
		return (ft_strnew(3));
	str_end = s + ft_strlen(s) - 1;
	while (*str_end == ' ' || *str_end == ',' || *str_end == '\n' ||
		*str_end == '\t')
		str_end--;
	return (ft_strsub(s, 0, str_end - s + 1));
}
