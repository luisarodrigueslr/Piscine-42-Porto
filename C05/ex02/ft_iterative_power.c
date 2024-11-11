/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luidos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:55:41 by luidos-s          #+#    #+#             */
/*   Updated: 2022/10/10 18:11:40 by luidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	valor;

	valor = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		valor = valor * nb;
		power--;
	}
	return (valor);
}

/*int 	main()
{
	printf("%d\n", ft_iterative_power(7,-9));
	printf("%d\n", ft_iterative_power(1,0));
	printf("%d\n", ft_iterative_power(7,1));
	printf("%d\n", ft_iterative_power(5,3));
	printf("%d\n", ft_iterative_power(2,4));
}*/
