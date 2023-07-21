/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybucaill <ybucaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 02:54:38 by ybucaill          #+#    #+#             */
/*   Updated: 2023/07/09 10:17:16 by ybucaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power-- > 1)
		nb *= result;
	return (nb);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%i", ft_iterative_power(5, 9));
// }

// j'avais oublie le header...
