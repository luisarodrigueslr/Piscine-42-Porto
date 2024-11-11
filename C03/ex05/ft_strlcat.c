/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srlcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luidos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:54:50 by luidos-s          #+#    #+#             */
/*   Updated: 2022/10/11 14:08:45 by luidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strlen(char *s)
{
	int	c;

	c = 0;
	while (*s)
	{
		c++;
		s++;
	}
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*s;
	unsigned int	dlen;
	unsigned int	res;
	unsigned int	slen;
	unsigned int	i;

	s = src;
	dlen = ft_strlen(dest);
	slen = ft_strlen(s);
	res = 0;
	i = 0;
	if (size > dlen)
		res = slen + dlen;
	else
		res = slen + size;
	while (s[i] && (dlen + 1) < size)
	{
		dest[dlen] = s[i];
		dlen++;
		i++;
	}
	dest[dlen] = '\0';
	return (res);
}

/*#include <stdio.h>
int	main(void)
{
	char src[] = "dragons";
	char dest[] = "imagine ";
	printf("%i \n", ft_strlcat(dest, src, 31));
	printf("%s \n", dest);
}*/
