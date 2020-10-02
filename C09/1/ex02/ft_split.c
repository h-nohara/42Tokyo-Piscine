/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:14:47 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/28 20:57:24 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	copy(char *dest, char *start_at, char *end_before)
{
	while (start_at < end_before)
	{
		*dest = *start_at;
		start_at++;
		dest++;
	}
	*dest = 0;
}

int		contain(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int		get_count(char *str, char *charset)
{
	int res;

	res = 0;
	while (*str)
	{
		if (!contain(*str, charset))
		{
			while (*str && !contain(*str, charset))
				str++;
			res++;
		}
		str++;
	}
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		n;
	char	*start_at;

	n = get_count(str, charset);
	arr = (char **)malloc(sizeof(char *) * (n + 1));
	i = 0;
	while (*str)
	{
		if (!contain(*str, charset))
		{
			start_at = str;
			while (*str && !contain(*str, charset))
				str++;
			arr[i] = (char *)malloc(sizeof(char) * (str - start_at + 1));
			copy(arr[i++], start_at, str);
		}
		str++;
	}
	arr[i] = 0;
	return (arr);
}
