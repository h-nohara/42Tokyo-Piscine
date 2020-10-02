/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 12:59:20 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/25 13:00:22 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;
	int		diff;
	char	tmp;

	diff = 'a' - 'A';
	i = 0;
	while (str[i] != '\0')
	{
		tmp = str[i];
		if (tmp >= 'A' && tmp <= 'Z')
		{
			str[i] = tmp + diff;
		}
		i++;
	}
	return (str);
}
