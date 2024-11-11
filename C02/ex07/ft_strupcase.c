/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luidos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:54:05 by luidos-s          #+#    #+#             */
/*   Updated: 2022/10/04 14:45:19 by luidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	u;

	u = 0;
	while (str[u] != '\0')
	{
		if (str[u] >= 97 && str[u] <= 122)
		{
			str[u] = str[u] - 32;
		}
		u = u + 1;
	}
	return (str);
}

/*#include <stdio.h>
int	main()
{
	char	str[] = "abcdef";
	printf("%s", ft_strupcase(str));
}*/
