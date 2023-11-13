/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:09:26 by algultse          #+#    #+#             */
/*   Updated: 2023/11/13 22:51:44 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*create_memory(int n)
{
	int		tmp;
	int		i;

	tmp = n;
	i = 0;
	while (tmp > 0)
	{
		tmp /= 10;
		i++;
	}
	return (malloc(sizeof(char) * (i + 1)));
}

char *ft_itoa(int n)
{
	char	*res;
	int		tmp;
	int		i;

	if (!(res = reate_memory(n)))
		return (NULL);
	
}


#include <stdio.h>
int main()
{
	printf ("create_memory: [%s]\n", create_memory(12345));
	// printf ("ft_itoa: [%s]\n", ft_itoa(12345));
	return (0);
}
