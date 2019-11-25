/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okherson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 17:33:10 by okherson          #+#    #+#             */
/*   Updated: 2018/10/29 15:09:44 by okherson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		else
			a++;
	}
	if (s1[a] == '\0' && s2[a] == '\0')
		return (0);
	else if (s1[a] == '\0' && s2[a] != '\0')
		return (-s2[a]);
	else
		return (s1[a]);
	return (0);
}