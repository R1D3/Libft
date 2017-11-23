/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emassou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 11:18:04 by emassou           #+#    #+#             */
/*   Updated: 2017/11/13 11:18:05 by emassou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*ptrdst;
	char	*ptrsrc;

	ptrdst = (char*)dst;
	ptrsrc = (char*)src;
	i = 0;
	while (i != n)
	{
		ptrdst[i] = ptrsrc[i];
		if (ptrsrc[i] == (char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
