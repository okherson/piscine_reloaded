/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okherson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 12:15:44 by okherson          #+#    #+#             */
/*   Updated: 2018/10/29 13:00:26 by okherson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char a);

void		ft_print_numbers(void)
{
	char	a;

	a = 48;
	while (a <= 57)
	{
		ft_putchar(a);
		a++;
	}
}