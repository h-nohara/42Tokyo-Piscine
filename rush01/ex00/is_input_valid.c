/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_input_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaida <gaida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 03:09:19 by gaida             #+#    #+#             */
/*   Updated: 2020/09/20 03:24:42 by gaida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	check_even_char(char c)
{
	return ('1' <= c && c <= '4');
}

bool	check_odd_char(char c)
{
	return (c == ' ');
}

bool	is_i_v_check(char c, int i)
{
	if (i % 2 == 0)
		return (check_even_char(c));
	else
		return (check_odd_char(c));
}

bool	is_correct_len(char *input)
{
	int	len;

	len = 0;
	while (*input++)
		len++;
	if (len == 31)
		return (true);
	else
		return (false);
}

bool	is_input_valid(char *input)
{
	int i;

	if (!is_correct_len(input))
		return (false);
	i = 0;
	while (input[i])
	{
		if (!is_i_v_check(input[i], i))
			return (false);
		i++;
	}
	return (true);
}
