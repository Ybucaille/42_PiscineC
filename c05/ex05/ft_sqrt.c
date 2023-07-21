/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybucaill <ybucaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 01:22:55 by ybucaill          #+#    #+#             */
/*   Updated: 2023/07/09 10:05:45 by ybucaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	start;
	long	middle;
	long	end;
	long	middle_sqrt;

	start = 0;
	end = nb;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (start <= end)
	{
		middle = (start + end) / 2;
		middle_sqrt = middle * middle;
		if (middle_sqrt == nb)
			return (middle);
		else if (middle_sqrt < nb)
			start = middle + 1;
		else
			end = middle -1;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%i", ft_sqrt(7));
// }
