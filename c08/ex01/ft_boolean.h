/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybucaill <ybucaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 04:26:43 by ybucaill          #+#    #+#             */
/*   Updated: 2023/07/13 04:33:45 by ybucaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define EVEN(x) (x % 2)
# define SUCCESS	0
# define FALSE	0
# define TRUE	1
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# include <unistd.h>

typedef char	t_bool;

t_bool	ft_is_even(int nbr);

void	ft_putsrt(char *str);

#endif
