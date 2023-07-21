/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybucaill <ybucaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:58:41 by ybucaill          #+#    #+#             */
/*   Updated: 2023/07/02 00:16:58 by ybucaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[j];
		tab[j] = swap;
		i++;
		j--;
	}	
}
