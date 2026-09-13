/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapierar <rapierar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 11:04:15 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/12 18:21:31 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	rush04(int x, int y);
void	line(int x, char a, char b, char c);

void	line(int x, char a, char b, char c)
{
	int	count_col;

	count_col = 1;
	if (x == 1)
		ft_putchar(a);
	else
	{
		while (count_col <= x)
		{
			if (count_col == 1)
				ft_putchar(a);
			else if (count_col == x)
				ft_putchar(c);
			else
				ft_putchar(b);
			count_col++;
		}
	}
	ft_putchar('\n');
}

void	rush04(int x, int y)
{
	int	count_row;

	count_row = 1;
	while (count_row <= y)
	{
		if (count_row == 1)
			line(x, 'A', 'B', 'C');
		else if (1 < count_row && count_row < y)
			line(x, 'B', ' ', 'B');
		else
			line(x, 'C', 'B', 'A');
		count_row++;
	}
}
