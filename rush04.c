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
#include <stdio.h>

void	rush04(int x, int y);

void	rush04(int x, int y)
{
	int	count_col;
	int	count_row;

	count_col = 1;
	count_row = 1;
	while (count_row <= y)
	{	
		if (1 < count_row && count_row < y)
		{
			if (1 < count_col && count_col < x)
			{
				if (x == 1)
				{
					ft_putchar('\n');
					count_col = 1;
					count_row++;
					printf("if (1 < count_row && count_row < y) --> if (1 < count_col && count_col < x)");
				}
				else
				{
				ft_putchar(' ');
				count_col++;
				}
			}
			else if (count_col == 1) 
			{
				ft_putchar('B');
				count_col++;
				if (x == 1)
				{
					ft_putchar('\n');
					count_col = 1;
					count_row++;
		//			printf("else if(count_col == 1)--> if (x == 1) ");
				}
			}
			else if (count_col == y)
			{
				ft_putchar('b');
				count_col = 1;
				count_row++;
			}
		}
		else if (count_row == 1)
		{
			while (count_col <= x)
			{
				if (count_col == 1)
				{
					ft_putchar('A');
					if (x == 1)
					{
						ft_putchar('\n');
						count_col = 1;
						count_row++;
		//				printf("else if (count_row == 1) --> while (count_col <= x) -->  if (count_col == 1) --> if (x == 1) ");
					}
				}
				else if (count_col == x)
					ft_putchar('C');
				else
				{
					ft_putchar('B');
					count_col++;
					printf("lse if (count_row == 1) --> while (count_col <= x) --> ELSe ");
				}	
			}
			count_col = 1;
			count_row++;
		}
                else if (count_row == y)
                {
                        while (count_col <= x)
                        {
                                if (count_col == 1)
					ft_putchar('c');
                                else if (count_col == x) 
				{
					ft_putchar('a');
					count_row++;
                        	}
				else
					ft_putchar('B');
					count_col++;
					printf(" else if (count_row == y " );	
                        }
		}
	}
}
