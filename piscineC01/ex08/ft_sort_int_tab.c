/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaongma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 10:19:18 by npatthan          #+#    #+#             */
/*   Updated: 2021/10/24 08:24:13 by npatthan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	keep;
	int	memory;

	index = 1;
	while (index < size)
	{
		keep = index;
		while ((*(tab + keep) < *(tab + keep - 1)) && keep > 0)
		{
			memory = *(tab + keep);
			*(tab + keep) = *(tab + keep - 1);
			*(tab + keep - 1) = memory;
			keep--;
		}	
		index++;
	}
}
