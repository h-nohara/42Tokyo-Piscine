/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 12:52:04 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/25 12:55:39 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;
	int		diff;
	char	tmp;

	diff = 'a' - 'A';
	i = 0;
	while (str[i] != '\0')
	{
		tmp = str[i];
		if (tmp >= 'a' && tmp <= 'z')
		{
			str[i] = tmp - diff;
		}
		i++;
	}
	return (str);
}
