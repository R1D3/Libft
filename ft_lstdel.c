/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emassou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 19:36:24 by emassou           #+#    #+#             */
/*   Updated: 2017/11/20 19:36:25 by emassou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*to_delete;

	while (*alst != NULL)
	{
		to_delete = *alst;
		*alst = (*alst)->next;
		del(to_delete->content, to_delete->content_size);
		free(to_delete);
	}
}
