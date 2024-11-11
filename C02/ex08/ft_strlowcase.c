/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luidos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:10:01 by luidos-s          #+#    #+#             */
/*   Updated: 2022/10/05 11:33:48 by luidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		if (str[l] >= 65 && str[l] <= 90)
		{
			str[l] = str[l] + 32;
		}
		l = l + 1;
	}
	return (str);
}

/*#include <stdio.h>
int	main()
{
	char	str[] = "ABCDEF";
	printf("%s", ft_strlowcase(str));
}*/
