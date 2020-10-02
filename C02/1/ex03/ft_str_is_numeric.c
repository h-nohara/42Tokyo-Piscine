/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 12:34:12 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/25 12:39:27 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		result;
	char	tmp;

	result = 1;
	i = 0;
	while (str[i] != '\0')
	{
		tmp = str[i];
		if (!(tmp >= '0' && tmp <= '9'))
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
