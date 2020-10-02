/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 12:52:59 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/29 19:09:08 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int diff;
	int is_ascending;

	i = 0;
	is_ascending = -1;
	while (i < length - 1)
	{
		diff = (*f)(tab[i], tab[i + 1]);
		if (diff == 0)
		{
			i++;
			continue ;
		}
		if (is_ascending == -1)
			is_ascending = diff < 0 ? 1 : 0;
		else if (is_ascending && diff > 0)
			return (0);
		else if (!is_ascending && diff < 0)
			return (0);
		i++;
	}
	return (1);
}
