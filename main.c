/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <ubartemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 18:02:32 by ubartemi          #+#    #+#             */
/*   Updated: 2019/05/01 13:18:17 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>

int		main(void)
{
	char	*str;
	int		fd;
	int		a;
	int		i;

	i = 0;
	str = (char*)malloc(100);
	fd = open("large_file.txt", O_RDONLY);
	if (fd < 0)
		return (123);
	while (i < 785)
	{
		a = get_next_line(fd, &str);
		printf("%s %d\n", str, a);
		i++;
	}
	free(str);
	close(fd);
	return (0);
}
