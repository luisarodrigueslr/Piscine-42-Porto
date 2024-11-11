/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luidos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:30:56 by luidos-s          #+#    #+#             */
/*   Updated: 2022/10/04 13:42:03 by luidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 32 && str[n] <= 126)
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
	printf("%d \n", ft_str_is_printable("sfjod:,"));
	printf("%d \n", ft_str_is_printable(""));
	printf("%d \n", ft_str_is_printable(" "));
}*/
