/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 02:15:01 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/27 02:43:07 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char *name;

	argc = 1;
	name = argv[0];
	while (*name)
		write(1, name++, 1);
	write(1, "\n", 1);
	return (0);
}
