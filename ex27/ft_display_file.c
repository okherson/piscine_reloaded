/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okherson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:10:24 by okherson          #+#    #+#             */
/*   Updated: 2018/10/29 17:10:01 by okherson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void		ft_putchar(char a)
{
	write(1, &a, 1);
}

void		ft_putstr(char *a)
{
	int		i;

	i = 0;
	while (a[i] != '\0')
	{
		ft_putchar(a[i]);
		i++;
	}
}

int			main(int argc, char **argv)
{
	int		simb_numb;
	char	*buf;

	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		simb_numb = open(argv[1], O_RDONLY);
		if (simb_numb != -1)
		{
			while (read(simb_numb, &buf, 1) != 0)
				write(1, &buf, 1);
			close(simb_numb);
		}
	}
	return (0);
}
