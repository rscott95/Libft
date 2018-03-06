/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 14:24:20 by rscott            #+#    #+#             */
/*   Updated: 2018/03/05 15:24:20 by rscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wchar.h>
#include <unistd.h>
#include "libft.h"

void	ft_putwstr(wchar_t const *str)
{
	ft_putwstr_fd(str, STDOUT_FILENO);
}
