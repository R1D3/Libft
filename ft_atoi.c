/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emassou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:09:39 by emassou           #+#    #+#             */
/*   Updated: 2017/11/08 11:09:41 by emassou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	long	resultat;
	int		negative;

	i = 0;
	resultat = 0;
	negative = 0;
	while (((str[i] >= 9) & (str[i] <= 13)) | (str[i] == 32))
	{
		i++;
	}
	if (str[i] == 45)
		negative = 1;
	if (str[i] == 43 | str[i] == 45)
		i++;
	while ((str[i] >= 48 & str[i] <= 57))
	{
		resultat = resultat * 10;
		resultat = resultat + (str[i] - '0');
		i++;
	}
	if (negative == 1)
		return (-resultat);
	return (resultat);
}
