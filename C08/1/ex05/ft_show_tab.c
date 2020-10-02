/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 18:11:13 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/27 20:15:34 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	print_with_br(char *s)
{
	int i;

	i = 0;
	while (s[i])
		write(1, s[i++], 1);
	write(1, "\n", 1);
}

void	putnbr_inner(int nb)
{
	char c;

	if (!nb)
		return ;
	putnbr_inner(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

void	print_nb(int nb)
{
	char c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		putnbr_inner(nb / 10);
		c = nb % 10 + '0';
		write(1, &c, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		print_with_br(par[i].str);
		print_nb(par[i].size);
		write(1, "\n", 1);
		print_with_br(par[i].copy);
		i++;
	}
}
