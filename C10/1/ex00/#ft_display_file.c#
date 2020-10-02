/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 18:29:18 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/29 00:44:32 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	print(int fd, char *s)
{
	while (*s)
		write(fd, s++, 1);
}

void	ft_display_file(char *s)
{
	int		f_open;
	int		res;
	char	buf;

	f_open = open(s, O_RDONLY);
	if (f_open == -1) {
		print(2, "Cannot read file.\n");
		return ;
	}
	while (1)
	{
		res = read(f_open, &buf, 1);
		if (res > 0)
			write(1, &buf, 1);
		else
			break ;
	}
	close(f_open);
}

int		main(int argc, char *argv[])
{
	if (argc <= 1)
		print(2, "File name missing.\n");
	else if (argc > 2)
		print(2, "Too many arguments.\n");
	else
		ft_display_file(argv[1]);
	return (0);
}
