/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okherson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 13:57:59 by okherson          #+#    #+#             */
/*   Updated: 2018/10/29 17:25:44 by okherson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	else if (nb >= 0 && nb <= 1)
		return (1);
	else if (nb > 1 && nb < 13)
	{
		res = nb;
		while (nb > 1)
		{
			res = res * (nb - 1);
			nb--;
		}
		return (res);
	}
	return (0);
}
