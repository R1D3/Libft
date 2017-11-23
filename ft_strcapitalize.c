/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emassou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 20:18:37 by emassou           #+#    #+#             */
/*   Updated: 2017/11/20 20:18:40 by emassou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int i;
	int var;

	i = 0;
	var = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (var == 0 & str[i] >= 97 & str[i] <= 122)
		{
			str[i] = str[i] - 32;
			var = 1;
		}
		else if (str[i] >= 97 & str[i] <= 122)
			var = 1;
		else if (str[i] >= 48 & str[i] <= 57)
			var = 1;
		else
			var = 0;
		i++;
	}
	return (str);
}
