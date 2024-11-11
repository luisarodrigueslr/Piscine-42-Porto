/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luidos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:29:06 by luidos-s          #+#    #+#             */
/*   Updated: 2022/10/11 14:15:18 by luidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	p;

	p = 2;
	if (nb < 2)
		return (0);
	while (p <= (nb / p))
	{
		if (nb % p == 0)
			return (0);
		p++;
	}
	return (1);
}

/*#include <stdio.h>
int 	main()
{
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(259));
	printf("%d\n", ft_is_prime(400));
	printf("%d\n", ft_is_prime(401));
	printf("%d\n", ft_is_prime(293));
}*/
