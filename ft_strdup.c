/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emassou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:38:09 by emassou           #+#    #+#             */
/*   Updated: 2017/11/08 16:38:11 by emassou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*newstr;

	newstr = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!newstr)
		return (NULL);
	ft_strcpy(newstr, str);
	return (newstr);
}
