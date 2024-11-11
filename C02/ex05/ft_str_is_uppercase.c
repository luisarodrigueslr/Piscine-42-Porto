/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luidos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:11:02 by luidos-s          #+#    #+#             */
/*   Updated: 2022/10/04 13:24:25 by luidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'A' && str[n] <= 'Z')
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
	printf("%d \n", ft_str_is_uppercase("ABCDEF"));
	printf("%d \n", ft_str_is_uppercase("ABCDeF"));
	printf("%d \n", ft_str_is_uppercase(""));
	printf("%d \n", ft_str_is_uppercase("ABCD3F"));
}*/
