/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okherson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 14:33:34 by okherson          #+#    #+#             */
/*   Updated: 2018/10/29 16:44:40 by okherson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb >= 0 && nb <= 1)
		return (1);
	else if (nb > 1 && nb < 13)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}
