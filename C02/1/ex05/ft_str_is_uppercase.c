/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 12:40:47 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/25 12:41:48 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		i;
	int		result;
	char	tmp;

	result = 1;
	i = 0;
	while (str[i] != '\0')
	{
		tmp = str[i];
		if (!(tmp >= 'A' && tmp <= 'Z'))
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
