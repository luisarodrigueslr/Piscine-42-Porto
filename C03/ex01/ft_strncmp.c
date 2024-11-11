/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luidos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:57:38 by luidos-s          #+#    #+#             */
/*   Updated: 2022/10/06 10:38:01 by luidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", strncmp("abc", "abc", 5));
	printf("%d\n", ft_strncmp("abc","abc", 5));
	
	printf("%d\n", strncmp("abc", "abcd", 5));
	printf("%d\n", ft_strncmp("abc","abcd", 5));
	
	printf("%d\n", strncmp("123", "12", 5));
	printf("%d\n", ft_strncmp("123","12", 5));
	
	printf("%d\n", strncmp("", "", 5));
	printf("%d\n", ft_strncmp("","", 5));
	
	return (0);
}*/
