/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emassou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:07:37 by emassou           #+#    #+#             */
/*   Updated: 2017/11/09 12:07:38 by emassou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_nb(int nb)
{
	long i;

	i = 0;
	if (nb == 0)
		i++;
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i++);
}

static int	ft_negorpos(int nb)
{
	if (nb < 0)
		return (1);
	else
		return (0);
}

char		*ft_itoa(int nb)
{
	long	nbx;
	long	len;
	char	*res;

	nbx = nb;
	len = ft_count_nb(nbx);
	res = ft_strnew(ft_count_nb(nb));
	if (!res)
		return (NULL);
	res[len] = '\0';
	len--;
	if (nbx < 0)
		nbx = -nbx;
	while (len >= 0)
	{
		res[len] = (nbx % 10) + '0';
		len--;
		nbx /= 10;
	}
	if (ft_negorpos(nb))
		res[0] = '-';
	return (res);
}
