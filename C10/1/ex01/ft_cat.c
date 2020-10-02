/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 01:08:35 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/29 08:42:57 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <libgen.h>

void	print(int fd, char *s)
{
	while (*s)
		write(fd, s++, 1);
}

void	print_error(char *fname, char *cmd_name, int flag)
{
	print(2, basename(cmd_name));
	print(2, ": ");
	print(2, fname);
	print(2, ": ");
	if (flag != 0)
		print(2, strerror(flag));
	else
		print(2, strerror(errno));
	print(2, "\n");
	errno = 0;
}

void	ft_display_file(char *fname, char *cmd_name)
{
	int		f_open;
	int		res;
	char	buf;

	if ((f_open = open(fname, O_RDONLY)) == -1)
	{
		print_error(fname, cmd_name, 0);
		return ;
	}
	while (1)
	{
		res = read(f_open, &buf, 1);
		if (errno)
		{
			print_error(fname, cmd_name, 0);
			return ;
		}
		if (res > 0)
			write(1, &buf, 1);
		else
			break ;
	}
	close(f_open);
}

void	repeat_mode(void)
{
	char	buf;
	int		res;

	while (1)
	{
		res = read(0, &buf, 1);
		if (res > 0)
			write(1, &buf, 1);
		else
			break ;
	}
}

int		main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		repeat_mode();
		return (0);
	}
	i = 1;
	while (i < argc)
		ft_display_file(argv[i++], argv[0]);
	return (0);
}
