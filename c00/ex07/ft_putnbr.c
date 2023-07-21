/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybucaill <ybucaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:32:25 by ybucaill          #+#    #+#             */
/*   Updated: 2023/06/30 07:07:48 by ybucaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	lnb;
	char	temp;

	lnb = nb;
	if (lnb < 0)
	{
		lnb *= -1;
		write(1, "-", 1);
	}
	if (lnb)
	{
		if (lnb / 10)
			ft_putnbr(lnb / 10);
		temp = '0' + (char)(lnb % 10);
		write(1, &temp, 1);
	}
	if (lnb == 0)
	{
		write(1, "0", 1);
	}	
}
