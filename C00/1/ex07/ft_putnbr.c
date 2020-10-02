/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 11:32:08 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/19 12:50:32 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_one_int(int n)
{
	char c;

	if (n == 0)
		return ;
	print_one_int(n / 10);
	c = '0' + n % 10;
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	char c;

	if (n < 0)
	{
		write(1, "-", 1);
		print_one_int(-(n / 10));
		c = '0' - n % 10;
	}
	else
	{
		print_one_int(n / 10);
		c = '0' + n % 10;
	}
	write(1, &c, 1);
}
