/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_correct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaida <gaida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 02:50:21 by gaida             #+#    #+#             */
/*   Updated: 2020/09/20 16:25:44 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		count_from_front(int pat[])
{
	int i;
	int count;
	int max_number;

	i = 0;
	count = 0;
	max_number = 0;
	while (i < 4)
	{
		if (pat[i] > max_number)
		{
			max_number = pat[i];
			count++;
		}
		i++;
	}
	return (count);
}

int		count_from_back(int pat[])
{
	int i;
	int count;
	int max_number;

	i = 3;
	count = 0;
	max_number = 0;
	while (i >= 0)
	{
		if (pat[i] > max_number)
		{
			max_number = pat[i];
			count++;
		}
		i--;
	}
	return (count);
}

bool	is_correct_line(int pat[], int front, int back)
{
	int front_cnt;
	int back_cnt;

	front_cnt = count_from_front(pat);
	back_cnt = count_from_back(pat);
	if (front_cnt == front && back_cnt == back)
		return (true);
	else
		return (false);
}

bool	is_correct(int pat[][4], int input[])
{
	int i;
	int arr[4];

	i = 0;
	while (i < 4)
	{
		arr[0] = pat[0][i];
		arr[1] = pat[1][i];
		arr[2] = pat[2][i];
		arr[3] = pat[3][i];
		if (!is_correct_line(arr, input[i], input[i + 4]))
			return (false);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (!is_correct_line(pat[i], input[i + 8], input[i + 12]))
			return (false);
		i++;
	}
	return (true);
}
