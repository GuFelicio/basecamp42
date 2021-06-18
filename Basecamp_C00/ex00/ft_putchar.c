/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-g <jcesar-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 00:13:42 by jcesar-g          #+#    #+#             */
/*   Updated: 2021/04/06 00:14:02 by jcesar-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(void)
{
	ft_putchar('c');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
