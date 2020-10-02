/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_unique_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 20:08:34 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/20 03:24:54 by gaida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_unique_col(int a, int b, int c, int d)
{
	if (a == b || a == c || a == d)
		return (false);
	if (b == c || b == d)
		return (false);
	if (c == d)
		return (false);
	return (true);
}

bool	is_unique_num(int arr[][4])
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (!is_unique_col(arr[0][i], arr[1][i], arr[2][i], arr[3][i]))
			return (false);
		i++;
	}
	return (true);
}
