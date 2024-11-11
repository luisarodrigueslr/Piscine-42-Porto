/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luidos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:22:59 by luidos-s          #+#    #+#             */
/*   Updated: 2022/10/05 11:44:04 by luidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*lowcase(char *str)
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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	lowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (a == 1)
			{
				str[i] = str[i] - 32;
				a = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			a = 0;
		else
			a = 1;
		i = i + 1;
	}
	return (str);
}

/*#include <stdio.h>
int	main()
{
	char	a[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s", ft_strcapitalize(a));
}*/
