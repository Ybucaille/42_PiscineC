/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybucaill <ybucaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:46:56 by ybucaill          #+#    #+#             */
/*   Updated: 2023/07/06 01:06:19 by ybucaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i])
		i++;
	while (src[k])
		k++;
	if (size <= i)
		k += size;
	else
		k += i;
	while (src[j] && i + 1 < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (k);
}
