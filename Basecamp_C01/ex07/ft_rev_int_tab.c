/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfelicio <gfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:47:38 by gfelicio          #+#    #+#             */
/*   Updated: 2021/04/15 18:23:56 by gfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int swap;
	int count;
	int repetitions;

	count = -1;
	repetitions = size / 2;
	size--;
	while (++count < repetitions)
	{
		swap = tab[count];
		tab[count] = tab[size - 1];
		tab[size - count] = swap;
	}
}
