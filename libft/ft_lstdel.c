/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:48:01 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/18 21:43:44 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *a;

	if (!alst)
		return ;
	tmp = *alst;
	while (tmp)
	{
		a = tmp->next;
		del(tmp->content, tmp->content_size);
		free(tmp);
		tmp = a;
	}
	*alst = NULL;
}
