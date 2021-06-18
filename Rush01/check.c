/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfelicio <gfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 02:05:08 by gfelicio          #+#    #+#             */
/*   Updated: 2021/04/12 02:32:22 by gfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sky.h"

void	check(int *args, int size)
{
	int count_error;
	int count_right;
	int i;
	int swap;

	swap = 0;
	i = 0;
	count_error = 0;
	count_right = 0;
	while (*args != '\0')
	{
		swap = args[i];
		if (swap >= 1 && swap <= 4)
			count_right++;
		else
			count_error++;
		i++;
	}
	if (count_error > 0)
		write(1, "Error\n", 6);
}
