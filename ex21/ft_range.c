/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okherson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 11:18:04 by okherson          #+#    #+#             */
/*   Updated: 2018/10/29 17:56:19 by okherson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int i;

	if (min >= max)
		return (0);
	i = 0;
	range = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
