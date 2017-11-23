/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emassou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:23:41 by emassou           #+#    #+#             */
/*   Updated: 2017/11/08 16:23:43 by emassou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (src[i] == '\0')
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
			return (dest);
		}
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
