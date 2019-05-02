/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 18:26:29 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/18 21:27:55 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_malloc_for_el(char **arr_str, char *s, char c)
{
	size_t	i;
	size_t	counter2;
	size_t	count_el;

	count_el = 0;
	i = 0;
	while (s[i] != '\0')
	{
		counter2 = 0;
		if ((s[i - 1] == c && s[i] != c) || ((s[0] != c) && (i == 0)))
		{
			while (s[i] != c && s[i] != '\0')
			{
				counter2++;
				i++;
			}
			arr_str[count_el] = (char*)malloc(sizeof(char) * counter2 + 1);
			if (!arr_str[count_el])
				while (count_el > 0)
					free(arr_str[count_el-- - 1]);
			count_el++;
			i--;
		}
		i++;
	}
}

static	void	ft_write_arr(char **arr_str, char *s, char c)
{
	size_t	counter;
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	counter = 0;
	while (s[counter] != '\0')
	{
		if ((s[counter - 1] == c && s[counter] != c)
				|| ((s[0] != c) && (counter == '\0')))
		{
			while (s[counter] != c && s[counter] != '\0')
				arr_str[i][j++] = s[counter++];
			arr_str[i][j] = '\0';
			counter--;
			i++;
		}
		counter++;
		j = 0;
	}
	arr_str[i] = NULL;
}

char			**ft_strsplit(char const *s, char c)
{
	char	**arr_str;

	if (!s)
		return (NULL);
	arr_str = (char**)malloc(sizeof(char*) * (ft_count_word((char*)s, c) + 1));
	if (!arr_str)
	{
		free(arr_str);
		return (0);
	}
	ft_malloc_for_el(arr_str, (char*)s, c);
	ft_write_arr(arr_str, (char*)s, c);
	return (arr_str);
}
