/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emassou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:36:19 by emassou           #+#    #+#             */
/*   Updated: 2017/11/13 12:36:20 by emassou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *tofind)
{
	int i;
	int j;
	int count;

	if (tofind[0] == '\0')
		return ((char*)str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		count = 0;
		while (tofind[j] != '\0')
		{
			if (tofind[j] == str[i + j])
				count++;
			if (tofind[count] == '\0')
				return ((char*)str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
