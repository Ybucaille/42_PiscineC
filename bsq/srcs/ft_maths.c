/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybucaill <ybucaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:56:18 by ybucaill          #+#    #+#             */
/*   Updated: 2023/07/19 22:47:30 by ybucaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/bsq.h"

int	**mathify(t_map *map)
{
	char	**terrain;
	int		**math_map;
	int		i;
	int		j;

	terrain = map->content;
	math_map = new_map(map);
	if (!map)
		return (NULL);
	i = 1;
	while (i < map->info.length)
	{
		j = 1;
		while (j < map->info.length)
		{
			if (terrain[i][j] == map->info.obstacle)
				math_map[i][j] = 0;
			else
				math_map[i][j] = ft_min(math_map[i - 1][j], math_map[i][j - 1],
						math_map[i - 1][j - 1]) + 1;
			j++;
		}
		i++;
	}
	return (math_map);
}

t_map	*assemble_maths(t_map *map, int **math_map)
{
	int			i;
	int			j;
	t_square	bsq;

	bsq = find_BSQ(math_map, map->info.length, map->info.height);
	i = bsq.line;
	while (i > bsq.line - bsq.size)
	{
		j = bsq.col;
		while (j > bsq.col - bsq.size)
		{
			map->content[i][j] = map->info.full;
			j--;
		}
		i--;
	}
	return (map);
}

void	free_map(t_map map)
{
	int	i;

	i = 0;
	while (i < map.info.height)
		free(map.content[i++]);
	free(map.content);
	
}
