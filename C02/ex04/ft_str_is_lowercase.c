/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luidos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:33:46 by luidos-s          #+#    #+#             */
/*   Updated: 2022/10/04 12:58:39 by luidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
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
	printf("%d \n", ft_str_is_lowercase("abcdef"));
	printf("%d \n", ft_str_is_lowercase("abcDef"));
	printf("%d \n", ft_str_is_lowercase(""));
	printf("%d \n", ft_str_is_lowercase("abc5ef"));
}*/
