/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luidos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:40:35 by luidos-s          #+#    #+#             */
/*   Updated: 2022/10/04 10:52:09 by luidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] >= 65 && str[n] <= 90) || (str[n] >= 97 && str[n] <= 122))
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
	printf("%d \n", ft_str_is_alpha("abcdef"));
	printf("%d \n", ft_str_is_alpha("ABCDEF"));
	printf("%d \n", ft_str_is_alpha(""));
	printf("%d", ft_str_is_alpha("abc9ef"));

}*/
