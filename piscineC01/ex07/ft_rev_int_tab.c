/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaongma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 10:18:37 by jlaongma          #+#    #+#             */
/*   Updated: 2021/10/24 08:24:04 by jlaongma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	shift;
	int	loop;
	int	reminder;

	shift = 0;
	loop = size;
	while (loop > 1)
	{
		reminder = *(tab + shift);
		*(tab + shift) = *(tab + size - 1 - shift);
		*(tab + size - 1 - shift) = reminder;
		loop = loop - 2;
		shift++;
	}
}
