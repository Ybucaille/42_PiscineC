/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhara <ybouhara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:29:34 by ybouhara          #+#    #+#             */
/*   Updated: 2023/07/19 23:03:31 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	ft_is_printable(char c)
{
	return (32 <= c && c <= 126);
}

int	ft_str_is_num(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!('0' <= str[i] && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	int		neg;
	char	c;

	neg = 1;
	if (nb < 0)
	{
		neg = -1;
		write(1, "-", 1);
	}
	if (nb <= -10 || 10 <= nb)
		ft_putnbr(neg * (nb / 10));
	c = '0' + (neg * (nb % 10));
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	result;

	i = 0;
	signe = 1;
	result = 0;
	if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	return (signe * result);
}

char	*ft_strncat(char *dst, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	if (n && (dst != src))
	{
		i = 0;
		j = 0;
		while (dst[i])
			i++;
		while (n-- && src[j])
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = 0;
	}
	return (dst);
}

int	ft_error(char *message)
{
	if (message[0])
		write(2, message, ft_strlen(message));
	return (0);
}
