/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luidos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:00:10 by luidos-s          #+#    #+#             */
/*   Updated: 2022/10/11 11:53:04 by luidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	r;

	r = 1;
	if (nb > 0)
	{
		while (r * r <= nb)
		{
			if (r * r == nb)
				return (r);
			r++;
		}
	}
	return (0);
}

/*#include <stdio.h>
int	main()
{
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(259));
	printf("%d\n", ft_sqrt(400));
}*/
