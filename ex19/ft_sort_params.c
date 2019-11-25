/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okherson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 14:19:29 by okherson          #+#    #+#             */
/*   Updated: 2018/10/29 15:23:56 by okherson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_putstr(char *p)
{
	int	i;

	i = 0;
	while (p[i] != '\0')
	{
		ft_putchar(p[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_swap(char **a, char **b)
{
	char	*mid;

	mid = *a;
	*a = *b;
	*b = mid;
}

int		ft_strcmp(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] != '\0' && b[i] != '\0')
	{
		if (a[i] < b[i])
			return (1);
		else if (b[i] < a[i])
			return (-1);
		else if (a[i] == b[i])
			i++;
	}
	if (a[i] == '\0' && b[i] == '\0')
		return (0);
	else if (a[i] == '\0' && b[i] != '\0')
		return (1);
	else if (b[i] == '\0' && a[i] != '\0')
		return (-1);
	return (0);
}

void	ft_argv_write(int c, char **v)
{
	int	i;

	i = 1;
	while (i < c)
	{
		ft_putstr(v[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	i;
	int repit;

	repit = 1;
	while (repit <= argc)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) < 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
			}
			i++;
		}
		repit++;
	}
	ft_argv_write(argc, argv);
	return (0);
}
