/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emassou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:00:46 by emassou           #+#    #+#             */
/*   Updated: 2017/11/13 12:00:47 by emassou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	tmp[len];

	if (len < 134217728)
	{
		ft_memcpy(tmp, src, len);
		ft_memcpy(dst, tmp, len);
		return (dst);
	}
	return (NULL);
}
