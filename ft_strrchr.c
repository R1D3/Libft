/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emassou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:15:02 by emassou           #+#    #+#             */
/*   Updated: 2017/11/14 18:15:04 by emassou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptrs;
	int		i;

	ptrs = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			ptrs = (char*)s + i;
		i++;
	}
	if (s[i] == (char)c)
		return (char*)s + i;
	return (ptrs);
}
