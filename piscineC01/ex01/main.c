/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:03:32 by psuanpro          #+#    #+#             */
/*   Updated: 2021/10/24 12:09:56 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_ultimate_ft.c"
#include <stdio.h>

int main(void)
{
	int i;

	i = 65;
	ft_ultimate_ft(&i);
	printf("%d",i);
	return 0;
}

