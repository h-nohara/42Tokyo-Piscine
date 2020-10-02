/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 12:15:29 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/26 16:29:42 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			init(unsigned int *i, unsigned int *j, int *res)
{
	*i = 0;
	*j = 0;
	*res = -1;
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned	int	i;
	unsigned	int	j;
	unsigned	int	len_src;
	int				res;

	init(&i, &j, &res);
	len_src = 0;
	while (src[len_src])
		len_src++;
	while (dest[j] && j < size)
		j++;
	if (j + 1 > size)
		return (size + len_src);
	if (j + 1 <= size && size <= j + len_src)
		res = j + len_src;
	while (src[i] && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	if (res != -1)
		return (res);
	return (j);
}
