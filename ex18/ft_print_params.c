/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okherson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 17:48:51 by okherson          #+#    #+#             */
/*   Updated: 2018/10/29 15:14:57 by okherson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

int		main(int argc, char **argv)
{
	int	i;
	int a;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			a = 0;
			while (argv[i][a] != '\0')
			{
				ft_putchar(argv[i][a]);
				a++;
			}
			i++;
			ft_putchar('\n');
		}
	}
	return (0);
}
