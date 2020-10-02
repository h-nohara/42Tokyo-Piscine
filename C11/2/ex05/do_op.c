/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 12:58:50 by hnohara           #+#    #+#             */
/*   Updated: 2020/09/29 13:21:22 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	(*get_op_func(int n1, int n2))(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	if (i != 1)
		return (NULL);
	if (s[0] == '+')
		return (f_add);
	if (s[0] == '-')
		return (f_sub);
	if (s[0] == '*')
		return (f_multi);
	if (s[0] == '/')
		return (f_div);
	if (s[0] == '%')
		return (f_mod);
	return (NULL);
}

int	main(int argc, char *argv[])
{
	int n1;
	int n2;
	int (*op_func(int, int));

	if (argc != 4)
		return (0);
	if (!(op_func = get_op_func(argv[2])))
		return (0);
	n1 = extract_num(argv[1]);
	n2 = extract_num(argv[3]);
	if (!check_valid(n1, n2, argv[2][0]))
	   return (0);	
	print_num(op_func(n1, n2));
	return (0);
}
