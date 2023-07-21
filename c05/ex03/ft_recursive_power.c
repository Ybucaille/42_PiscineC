/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybucaill <ybucaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 02:55:04 by ybucaill          #+#    #+#             */
/*   Updated: 2023/07/09 09:58:28 by ybucaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
		nb *= ft_recursive_power(nb, power -1);
	return (nb);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%i", ft_recursive_power(2, 5));
// }

// j'avais oublie le header...
