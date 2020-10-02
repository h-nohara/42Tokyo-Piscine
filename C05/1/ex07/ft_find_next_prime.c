/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 01:59:49 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/27 02:06:50 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	is_prime_recursive(int nb, int i)
{
	if (nb % i == 0)
		return (0);
	if (nb / i < i)
		return (1);
	return (is_prime_recursive(nb, i + 1));
}

int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	return (is_prime_recursive(nb, 2));
}

int	ft_find_next_prime(int nb)
{
	while (nb <= INT_MAX)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (nb);
}
