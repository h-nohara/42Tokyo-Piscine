/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 14:13:37 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/25 23:50:58 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (!to_find[0])
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j])
		{
			if (to_find[j] != str[i])
				break ;
			i++;
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i - j]);
		i = i - j + 1;
	}
	return (0);
}
