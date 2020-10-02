/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 12:18:33 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/29 12:23:28 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *arr;

	arr = (int *)malloc(sizeof(int) * length);
	if (!arr)
		return (arr);
	i = 0;
	while (i < length)
		arr[i] = (*f)(tab[i++]);
	return (arr);
}
