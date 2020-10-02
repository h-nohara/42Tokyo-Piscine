/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 13:09:18 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/25 13:17:59 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_number(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int		is_lowercase(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int		is_uppercase(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int		is_word(char c)
{
	if (is_number(c) || is_uppercase(c) || is_lowercase(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int is_first;

	i = 0;
	is_first = 1;
	while (str[i] != '\0')
	{
		if (!is_word(str[i]))
			is_first = 1;
		else
		{
			if (is_first && is_lowercase(str[i]))
				str[i] = str[i] - 32;
			else if (!is_first && is_uppercase(str[i]))
				str[i] = str[i] + 32;
			is_first = 0;
		}
		i++;
	}
	return (str);
}
