/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-g <jcesar-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 00:34:43 by jcesar-g          #+#    #+#             */
/*   Updated: 2021/04/06 00:49:53 by jcesar-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

int		main(void)
{
	ft_print_numbers();
	return (0);
}

void	ft_print_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		write(1, &i, 1);
		i++;
	}
}
