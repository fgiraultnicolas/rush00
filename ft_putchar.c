/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapierar <rapierar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:18:33 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/12 12:24:22 by rapierar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c);

/*
int main()
{
	ft_putchar('a');
	return (0);
	}
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
