/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 14:36:20 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/27 15:19:01 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_str_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		get_strs_len(int size, char **strs)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (i < size)
	{
		res += get_str_len(strs[i]);
		i++;
	}
	return (res);
}

int		concat_str(char *dest, char *src, int start_at)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[start_at] = src[i];
		i++;
		start_at++;
	}
	return (start_at);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		whole_len;
	int		sep_len;
	int		i;
	int		j;

	if (size == 0)
	{
		res = (char *)malloc(1);
		res[0] = '\0';
		return (res);
	}
	sep_len = get_str_len(sep);
	whole_len = get_strs_len(size, strs) + (size - 1) * sep_len + 1;
	res = (char *)malloc(whole_len);
	j = concat_str(res, strs[0], 0);
	i = 1;
	while (i < size)
	{
		j = concat_str(res, sep, j);
		j = concat_str(res, strs[i++], j);
	}
	res[j] = '\0';
	return (res);
}
