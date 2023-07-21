/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybucaill <ybucaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:18:10 by ybucaill          #+#    #+#             */
/*   Updated: 2023/07/19 22:59:25 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../includes/bsq.h"

int	**create_mathmap(t_map *terrain)
{
	int	i;
	int	**map;

	i = 0;
	map = (int **)malloc(terrain->info.height * sizeof(int *));
	if (!map)
	{
		free(map);
		return (NULL);
	}
	while (i < terrain->info.height)
	{
		map[i] = (int *)malloc((terrain->info.length) * sizeof(int));
		if (!map[i])
		{
			while (i >= 0)
				free(map[i--]);
			free_map(*terrain);
			free(map);
			free(terrain);
			return (NULL);
		}
		i++;
	}
	return (map);
}

int	**new_map(t_map *terrain)
{
	int	i;
	int	**map;

	i = 0;
	map = create_mathmap(terrain);
	while (i < terrain->info.height)
	{
		if (terrain->content[i][0] == terrain->info.empty)
			map[i][0] = 1;
		if (terrain->content[i][0] == terrain->info.obstacle)
			map[i][0] = 0;
		i++;
	}
	i = 0;
	while (i < terrain->info.length)
	{
		if (terrain->content[0][i] == terrain->info.empty)
			map[0][i] = 1;
		if (terrain->content[0][i] == terrain->info.obstacle)
			map[0][i] = 0;
		i++;
	}
	return (map);
}

int	ft_min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	if (b <= a && b <= c)
		return(b);
	if (c <= a && c <= b)
		return (c);
	else
		return (0);
}

void	display_mathmap(int **math_map, int length, int height)
{
	int	i;
	int	j;

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < length)
		{
			ft_putnbr(math_map[i][j]);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

t_square	find_BSQ(int **math_map, int length, int height)
{
	int			i;
	int			j;
	int			max;
	t_square	bsq;

	i = 0;
	max = 0;
	bsq.line = 0;
	bsq.col = 0;
	while (i < height)
	{
		j = 0;
		while (j < length)
		{
			if (math_map[i][j] > max)
			{
				bsq.line = i;
				bsq.col = j;
				max = math_map[i][j];
				bsq.size = max;
			}
			j++;
		}
		i++;
	}
	return (bsq);
}
