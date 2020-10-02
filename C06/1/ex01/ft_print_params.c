/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 02:25:25 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/27 02:38:45 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i <= argc - 1)
	{
		while (*argv[i])
			write(1, (argv[i])++, 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
