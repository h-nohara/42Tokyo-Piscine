/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 12:47:31 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/25 12:49:08 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;
	int		result;
	char	tmp;

	result = 1;
	i = 0;
	while (str[i] != '\0')
	{
		tmp = str[i];
		if (!(tmp >= ' ' && tmp <= '~'))
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
