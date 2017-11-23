/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emassou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:44:58 by emassou           #+#    #+#             */
/*   Updated: 2017/11/09 17:45:00 by emassou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int start;
	int end;

	if (!s)
		return (NULL);
	end = ft_strlen(s) - 1;
	start = 0;
	while ((s[start] == ' ' || s[start] == '\n' ||
		s[start] == '\t') && s[start])
		start++;
	while ((end > start) && (s[end] == ' ' ||
		s[end] == '\n' || s[end] == '\t') && s[end])
		end--;
	return (ft_strsub(s, start, (end - start + 1)));
}
