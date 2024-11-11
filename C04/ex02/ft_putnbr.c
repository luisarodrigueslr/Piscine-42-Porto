/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luidos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 08:53:19 by luidos-s          #+#    #+#             */
/*   Updated: 2022/10/07 09:01:55 by luidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	numero(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		numero('-');
		numero('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		numero('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		numero(nb + 48);
		return ;
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

/*int	main()
{
	ft_putnbr(42);
}*/
