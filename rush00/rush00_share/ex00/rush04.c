/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 17:39:34 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/13 18:04:53 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tft_putchar.c"

void	core(int x, int y, int i, int j)
{
	if (i == 0 && j == 0 || i == x - 1 && j == y - 1 && x > 1 && y > 1)
	{
		tft_putchar("A");
	}
	else if ((i == 0 && j == y - 1) || (i == x - 1 && j == 0))
	{
		tft_putchar("C");
	}
	else if (i == 0 || i == x - 1 || j == 0 || j == y - 1)
	{
		tft_putchar("B");
	}
	else
	{
		tft_putchar(" ");
	}
	if (i == x - 1)
	{
		tft_putchar("\n");
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			core(x, y, i, j);
			i++;
		}
		j++;
	}
}
