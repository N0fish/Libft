/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:45:56 by algultse          #+#    #+#             */
/*   Updated: 2023/11/06 16:45:59 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

/*
#include <stdio.h>
int	main()
{
	char str[] = "Salut!";
	int	res;

	// res = strlen(str);
	res = ft_strlen(str);
	printf("res: [%d], str: [%s]\n", res, str);
	return (0);
}
*/