/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_one_pattern.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaida <gaida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 17:47:07 by gaida             #+#    #+#             */
/*   Updated: 2020/09/20 17:32:58 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "store_line_patterns.h"

extern	int	**g_all_pat;

int		**get_line_pat(void)
{
	return (g_all_pat);
}

void	fill_row(int line[], int rid)
{
	int	i;
	int	**line_pat;

	line_pat = get_line_pat();
	i = 0;
	while (i < 4)
	{
		line[i] = line_pat[rid][i];
		i++;
	}
}

void	get_one_pattern(int ind, int pat[][4])
{
	const int	c_per = 4 * 3 * 2 * 1;
	int			rid;
	int			i;

	i = 0;
	while (i < 4)
	{
		rid = ind % c_per;
		fill_row(pat[i], rid);
		ind /= c_per;
		i++;
	}
}
