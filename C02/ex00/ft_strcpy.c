/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luidos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:26:33 by luidos-s          #+#    #+#             */
/*   Updated: 2022/10/05 12:54:12 by luidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c = c + 1;
	}
	dest[c] = '\0';
	return (dest);
}

/*#include <stdio.h>
int	main()
{
	char src[] = "funciona";
	char dest[] = "ola";
	printf("%s", ft_strcpy(dest, src));
}*/
