/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luidos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:55:00 by luidos-s          #+#    #+#             */
/*   Updated: 2022/09/26 16:51:41 by luidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	numero(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			numero(a / 10 + 48);
			numero(a % 10 + 48);
			numero(' ');
			numero(b / 10 + 48);
			numero(b % 10 + 48);
			if (a != 98)
			{
				numero(',');
				numero (' ');
			}
			b = b + 1;
		}
		a = a + 1;
	}
}
