/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emassou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 15:46:13 by emassou           #+#    #+#             */
/*   Updated: 2017/11/20 15:46:14 by emassou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nb_words(char *str, char c)
{
	int i;
	int	nb;

	if (!str)
		return (0);
	i = 0;
	nb = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i])
			nb++;
		while (str[i] != c && str[i])
			i++;
	}
	return (nb);
}

static size_t	strlen_c(char const *str, char c)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	char	**tab;
	size_t	n;

	i = 0;
	n = 0;
	tab = (char**)malloc(sizeof(char*) * ft_nb_words((char*)s, c) + 1);
	if (!tab || !s)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			tab[n] = ft_strnew(strlen_c(s + i, c));
			ft_strncpy(tab[n], (char*)s + i, strlen_c(s + i, c));
			n++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	tab[n] = NULL;
	return (tab);
}
