/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfelicio <gfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 02:05:10 by gfelicio          #+#    #+#             */
/*   Updated: 2021/04/12 02:44:49 by gfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sky.h"


char database(char* x[])
{
	int rr;
	int rl;
	int count;
	
	rr = 13;
	rl = 9;
	count = 0;
	while (count < 4)
	{

	if (strcmp(x[rl], "4") && strcmp(x[rr], "1"))
	{
		char values[8] = "1 2 3 4";
		printpuzzle(values);
	}
	if (strcmp(x[rl], "3") && strcmp(x[rr], "1"))
	{
		char values[8] = {"1 3 2 4"};
		printpuzzle(values);
	}
	if (!(strcmp(x[rl], "3") && strcmp(x[rr], "2")))
	{
		char values[8] = "1 2 4 3";
		printpuzzle(values);
	}
	if (!(strcmp(x[rl], "2") && strcmp(x[rr], "3")))
	{
		char values[8] = "1 4 3 2";
		printpuzzle(values);
	}

	if (!(strcmp(x[rl], "2") && strcmp(x[rr], "2")))
	{
		char values[8] = {"1 4 2 3"};
		printpuzzle(values);
	}

	if (!(strcmp(x[rl], "4") && strcmp(x[rr], "1")))
	{
		char values[8] = "1 2 3 4";
		printpuzzle(values);
	}

	if (!(strcmp(x[rl], "2") && strcmp(x[rr], "1")))
	{
		char values[8] = "3 1 2 4";
		printpuzzle(values);
	}

	if (!(strcmp(x[rl], "1") && strcmp(x[rr], "2")))
	{
		char values[8] = "4 1 2 3";
		printpuzzle(values);
	}

	if (!(strcmp(x[rl], "1") && strcmp(x[rr], "3")))
	{
		char values[8] = "4 1 3 2";
		printpuzzle(values);
	}

	if (!(strcmp(x[rl], "1") && strcmp(x[rr], "4")))
	{
		char values[8] = "4 3 2 1";
		printpuzzle(values);
	}

		count++;
		rr++;
		rl++;
	}
	return 0;
}
