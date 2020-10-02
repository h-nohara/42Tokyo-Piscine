/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 02:45:47 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/27 02:48:51 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	while (argc - 2 >= 0)
	{
		while (*argv[argc - 1])
			write(1, (argv[argc - 1])++, 1);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
