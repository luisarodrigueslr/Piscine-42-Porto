/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luidos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:13:44 by luidos-s          #+#    #+#             */
/*   Updated: 2022/10/10 18:26:23 by luidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	valor;

	valor = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	return (valor);
}

/*int 	main()
{
	printf("%d\n", ft_recursive_power(7,-9));
	printf("%d\n", ft_recursive_power(1,0));
	printf("%d\n", ft_recursive_power(7,1));
	printf("%d\n", ft_recursive_power(5,3));
	printf("%d\n", ft_recursive_power(2,4));
}*/
