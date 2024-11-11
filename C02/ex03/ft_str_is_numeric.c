/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luidos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:53:25 by luidos-s          #+#    #+#             */
/*   Updated: 2022/10/04 11:28:33 by luidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 48 && str[n] <= 57)
		{
			n = n + 1;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*#include <stdio.h>
int	main()
{
	printf("%d \n", ft_str_is_numeric("0123456789"));
	printf("%d \n", ft_str_is_numeric(""));
	printf("%d", ft_str_is_numeric("01234G6789"));

}*/
