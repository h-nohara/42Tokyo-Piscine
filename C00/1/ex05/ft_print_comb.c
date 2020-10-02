/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 10:48:25 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/19 10:53:58 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	loop_2dim(int i);
void	put_num(int i, int j, int k);

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (i <= 7)
	{
		loop_2dim(i);
		i++;
	}
}

void	loop_2dim(int i)
{
	int j;
	int k;

	j = i + 1;
	k = 0;
	while (j <= 9)
	{
		k = j + 1;
		while (k <= 9)
		{
			if (i == 7 && j == 8 && k == 9)
			{
				write(1, "789", 3);
				break ;
			}
			put_num(i, j, k);
			k++;
		}
		j++;
	}
}

void	put_num(int i, int j, int k)
{
	char ii;
	char jj;
	char kk;

	ii = '0' + i;
	jj = '0' + j;
	kk = '0' + k;
	write(1, &ii, 1);
	write(1, &jj, 1);
	write(1, &kk, 1);
	write(1, ", ", 2);
}
