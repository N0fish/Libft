/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:09:26 by algultse          #+#    #+#             */
/*   Updated: 2023/11/14 14:11:54 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*create_memory(int n, int *len)
{
	int	i;

	i = 0;
	len = &i;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (malloc(sizeof(char) * (i + 1)));
}

char	*ft_itoa(int n)
{
	char	*res;
	int		*len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	res = create_memory(n, len);
	if (!res)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		res[0] = '-';
	}
	while (n)
	{
		res[*len] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (res);
}

/*
#include <stdio.h>
int main()
{
	// printf ("create_memory: [%s]\n", create_memory(12345));
	printf ("ft_itoa: [%s]\n", ft_itoa(12345));
	return (0);
}
*/