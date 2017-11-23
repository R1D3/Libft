/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emassou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:49:20 by emassou           #+#    #+#             */
/*   Updated: 2017/11/14 18:49:21 by emassou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_size;

	i = 0;
	while (dst[i] && i < size)
		i++;
	dest_size = i;
	while (src[i - dest_size] && i + 1 < size)
	{
		dst[i] = src[i - dest_size];
		i++;
	}
	if (dest_size < size)
		dst[i] = '\0';
	return ((dest_size + ft_strlen(src)));
}
