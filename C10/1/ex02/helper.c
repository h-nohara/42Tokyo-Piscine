/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 17:06:37 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/30 17:37:45 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

void	print(char *s)
{
	int i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}

int		to_number(char *s)
{
	int i;
	int val;

	i = 0;
	val = 0;
	while (s[i])
		val = val * 10 + (s[i++] - '0');
	return (val);
}
