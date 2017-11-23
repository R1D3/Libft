/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emassou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 20:08:04 by emassou           #+#    #+#             */
/*   Updated: 2017/11/20 20:08:05 by emassou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int *tab;
	int i;
	int size;

	tab = 0;
	if (min >= max)
		return (0);
	i = 0;
	size = max - min;
	tab = (int*)malloc(sizeof(int) * (size) + 1);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
