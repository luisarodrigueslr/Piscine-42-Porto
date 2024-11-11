int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}

/*#include <stdio.h>
int	main()
{
	printf("%d \n", ft_strcmp("abc", "ghi"));
	printf("%d \n", ft_strcmp("abc", "abc"));
	printf("%d", ft_strcmp("ghi", "012"));
}*/
