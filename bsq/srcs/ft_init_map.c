/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhara <ybouhara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:15:23 by ybouhara          #+#    #+#             */
/*   Updated: 2023/07/19 23:07:14 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	ft_open_file(t_map *map)
{
	map->fd = open(map->filename, O_RDONLY);
	return (map->fd != -1);
}

int	ft_read_file(t_map *map)
{
	map->bytes_read = read(map->fd, map->buffer, BUFFER_SIZE);
	return (map->bytes_read > 0);
}

int	ft_get_line(t_map *map)
{
	int		i;
	char	tmp[100000];

	while (ft_read_file(map))
	{
		i = 0;
		while (i < BUFFER_SIZE)
		{
			if (map->buffer[i] == '\n')
			{
				ft_strncat(tmp, map->buffer, i);
				map->line = tmp;
				return (1);
			}
			i++;
		}
		ft_strncat(tmp, map->buffer, i);
		map->line = tmp;
	}
	return (0);
}

int	ft_init_map(t_map *map)
{
	int		len;

	if (!ft_open_file(map))
		return (0);

	if (ft_get_line(map))
		printf("%s\n", map->line);

	if (close(map->fd) == -1)
		return (0);

	len = ft_strlen(map->line);

	if (!ft_is_printable(map->line[len - 3]))
		return (0);
	map->c_empty = map->line[len - 3];

	if (!ft_is_printable(map->line[len - 1]))
		return (0);
	map->c_full = map->line[len - 1];

	if (!ft_is_printable(map->line[len - 2]))
		return (0);
	map->c_obstacle = map->line[len - 2];

	map->line[len - 3] = 0;

	if (!ft_str_is_num(map->line))
		return (1);
	map->nb_line = ft_atoi(map->line);

	return (1);
}
