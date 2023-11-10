/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:26:16 by algultse          #+#    #+#             */
/*   Updated: 2023/11/10 11:58:57 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!big && !len)
		return (0);
	if (!*little)
		return ((char *)big);
	while (len-- && *big)
	{
		i = 0;
		while ((*(big + i) == *(little + i)) && *(little + i) && len >= i)
		{
			if (!*(little + i + 1))
				return ((char *)big);
			i++;
		}
		big++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main()
{
	char str1[] = "Test string";
	char str2[] = "str";
	
	printf("ft_strnstr: [%s]\n", ft_strnstr(str1, str2, (size_t)8));
	printf("strnstr: [%s]\n", strnstr(str1, str2, (size_t)8));
	return (0);
}
*/