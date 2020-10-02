/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_line_patterns.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaida <gaida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 17:47:07 by gaida             #+#    #+#             */
/*   Updated: 2020/09/20 13:43:27 by gaida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int **g_all_pat;

void	allocate_g_all_pat(void)
{
	int	i;

	i = 0;
	g_all_pat = (int**)malloc(sizeof(int*) * 24);
	i = 0;
	while (i < 24)
	{
		g_all_pat[i] = (int*)malloc(sizeof(int) * 4);
		i++;
	}
}

void	store_line(int i, int a[])
{
	int	j;

	j = 0;
	while (j < 4)
	{
		g_all_pat[i][j] = a[j];
		j++;
	}
}

void	loop2(int a[], int *cnt)
{
	if (a[0] == a[2] || a[1] == a[2])
		return ;
	a[3] = 1;
	while (a[3] < 5)
	{
		if (!(a[0] == a[3] || a[1] == a[3] || a[2] == a[3]))
		{
			store_line(*cnt, a);
			(*cnt)++;
		}
		a[3]++;
	}
}

void	loop1(int a[], int *cnt)
{
	if (a[0] == a[1])
		return ;
	a[2] = 1;
	while (a[2] < 5)
	{
		loop2(a, cnt);
		a[2]++;
	}
}

void	store_line_patterns(void)
{
	int		i;
	int		cnt;
	int		a[4];

	i = 0;
	allocate_g_all_pat();
	while (i < 4)
	{
		a[i] = 1;
		i++;
	}
	cnt = 0;
	while (a[0] < 5)
	{
		a[1] = 1;
		while (a[1] < 5)
		{
			loop1(a, &cnt);
			a[1]++;
		}
		a[0]++;
	}
}
