/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 16:15:19 by rscott            #+#    #+#             */
/*   Updated: 2018/03/05 16:15:30 by rscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\f'
		|| c == '\v' || c == '\r')
	{
		return (1);
	}
	return (0);
}