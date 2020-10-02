/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 12:47:52 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/29 12:51:09 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (i < length)
	{
		if ((*f)(tab[i++]) != 0)
			count++;
	}
	return (count);
}
