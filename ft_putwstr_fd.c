/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 14:24:45 by rscott            #+#    #+#             */
/*   Updated: 2018/03/05 15:06:13 by rscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wchar.h>
#include "libft.h"
#include <unistd.h>

void	ft_putwstr_fd(wchar_t const *str, int fd)
{
	while (*str)
		ft_putwchar_fd(*str++, fd);
}
