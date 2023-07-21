/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybucaill <ybucaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 22:30:13 by ybucaill          #+#    #+#             */
/*   Updated: 2023/07/09 09:56:35 by ybucaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
		return (ft_recursive_factorial(nb -1) * nb);
	return (nb);
}

//#include <stdio.h>

// int	main(void)
// {
// 	printf("%i", ft_recursive_factorial(30));
// }
