/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okherson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 11:11:11 by okherson          #+#    #+#             */
/*   Updated: 2018/10/26 11:48:04 by okherson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int a;
	int	i;

	i = 0;
	a = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			a++;
		i++;
	}
	return (a);
}