/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 17:09:09 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/18 19:22:15 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *p_start;

	if (!lst || !f || !(tmp = (t_list*)malloc(sizeof(*lst))))
		return (NULL);
	tmp = f(lst);
	p_start = tmp;
	while (lst->next)
	{
		lst = lst->next;
		if (!(tmp->next = f(lst)))
		{
			while (p_start)
			{
				free(p_start);
				p_start = p_start->next;
			}
			free(tmp->next);
			lst = NULL;
			return (0);
		}
		tmp = tmp->next;
	}
	tmp = f(lst);
	return (p_start);
}
