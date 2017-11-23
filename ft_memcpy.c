/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emassou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:59:07 by emassou           #+#    #+#             */
/*   Updated: 2017/11/13 10:59:08 by emassou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*ptrdst;
	const char	*ptrsrc;

	ptrdst = (char*)dst;
	ptrsrc = (const char*)src;
	while (n--)
	{
		*ptrdst++ = *ptrsrc++;
	}
	return (dst);
}
