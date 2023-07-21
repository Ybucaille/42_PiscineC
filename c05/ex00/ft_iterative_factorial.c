/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybucaill <ybucaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 22:18:55 by ybucaill          #+#    #+#             */
/*   Updated: 2023/07/09 09:55:31 by ybucaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		tmp *= i++;
	}
	return (tmp);
}

// #include <stdio.h>
// int main()
// {
// 	int	s;
// 	s = 10;
// 	printf("%d", ft_iterative_factorial(s));
// }
