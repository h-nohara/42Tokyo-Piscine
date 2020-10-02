/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 22:47:38 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/24 22:58:09 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int has_changed;
	int tmp;

	while (1)
	{
		i = 0;
		has_changed = 0;
		while (i <= size - 2)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				has_changed = 1;
			}
			i++;
		}
		if (has_changed == 0)
			break ;
	}
}
