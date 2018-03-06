/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 15:36:26 by rscott            #+#    #+#             */
/*   Updated: 2018/03/05 17:32:26 by rscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*phaystack;
	size_t	letters_left;
	size_t	needle_len;
	size_t	i;

	phaystack = (char *)haystack;
	if (needle[0] == '\0')
		return (phaystack);
	i = 0;
	letters_left = len;
	needle_len = (size_t)ft_strlen(needle);
	while (*phaystack && letters_left >= needle_len)
	{
		if (*phaystack == *needle)
		{
			if (ft_strncmp(needle, phaystack, needle_len) == 0)
				return (phaystack);
		}
		i++;
		letters_left--;
		phaystack++;
	}
	return (NULL);
}
