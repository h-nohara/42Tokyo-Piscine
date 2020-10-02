/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input_arr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 18:06:00 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/20 02:35:53 by gaida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	get_input_arr(char *s, int result[])
{
	int i;
	int length;
	int curr;

	i = 0;
	length = 0;
	while (s[i] != '\0')
	{
		if (s[i] != ' ')
		{
			curr = s[i];
			result[length] = curr - '0';
			length++;
		}
		i++;
	}
}
