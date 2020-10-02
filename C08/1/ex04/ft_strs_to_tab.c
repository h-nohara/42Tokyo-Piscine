/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:43:15 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/27 18:08:03 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					get_len(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void				copy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*res;

	i = 0;
	res = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!res)
		return (0);
	while (i < ac)
	{
		res[i].size = get_len(av[i]);
		res[i].str = (char *)malloc(res[i].size + 1);
		res[i].copy = (char *)malloc(res[i].size + 1);
		copy(res[i].str, av[i]);
		copy(res[i].copy, av[i]);
		i++;
	}
	res[i].str = 0;
	return (res);
}
