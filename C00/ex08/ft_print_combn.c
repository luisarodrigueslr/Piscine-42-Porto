/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luidos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:46:11 by luidos-s          #+#    #+#             */
/*   Updated: 2022/09/27 16:51:24 by luidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_print_combn(int n)
{
        if ((n = 0) && (n <= 9))
        {       
                numero(n);
                if (n != 9)
                {
                        numero(',');
                }
                n = n + 1;
        }       
}

int	main(void)
{
	ft_print_combn(n);
	return (0);
}