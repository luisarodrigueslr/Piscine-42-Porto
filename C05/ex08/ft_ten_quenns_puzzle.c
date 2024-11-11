/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_quenns_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luidos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:04:46 by luidos-s          #+#    #+#             */
/*   Updated: 2022/10/11 15:55:33 by luidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	p;

	p = 2;
	if (nb < 2)
		return (0);
	while (p <= (nb / p))
	{
		if (nb % p == 0)
			return (ft_find_next_prime(nb + 1));
		p++;
	}
	return (nb);
}

/*#include <stdio.h>
int	main()
{
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(11));
	printf("%d\n", ft_find_next_prime(259));
	printf("%d\n", ft_find_next_prime(400));
	printf("%d\n", ft_find_next_prime(401));
	printf("%d\n", ft_find_next_prime(293));
}*/
