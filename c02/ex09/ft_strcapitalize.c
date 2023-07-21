/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybucaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:13:04 by ybucaill          #+#    #+#             */
/*   Updated: 2023/07/04 05:53:09 by ybucaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_separator(char c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')))
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (check_separator(str[i]))
			flag = 1;
		if (str[i] >= '0' && str[i] <= '9')
			flag = 0;
		if (flag == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			flag = 0;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char s[70] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(s));
	return (0);
}
*/
