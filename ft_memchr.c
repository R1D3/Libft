/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emassou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:17:21 by emassou           #+#    #+#             */
/*   Updated: 2017/11/13 12:17:22 by emassou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*str;
	char	j;

	i = 0;
	str = (char*)s;
	j = (char)c;
	while (n)
	{
		if (str[i] != j)
			i++;
		else
			return ((void*)s + i);
		n--;
	}
	return (NULL);
}
