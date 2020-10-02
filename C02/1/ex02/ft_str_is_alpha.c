/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 12:21:19 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/25 12:31:58 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		result;
	char	tmp;

	result = 1;
	i = 0;
	while (str[i] != '\0')
	{
		tmp = str[i];
		if (!((tmp >= 'A' && tmp <= 'Z') || (tmp >= 'a' && tmp <= 'z')))
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
