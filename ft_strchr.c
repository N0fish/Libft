/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:18:41 by algultse          #+#    #+#             */
/*   Updated: 2023/11/09 10:46:15 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
		if (!*s++)
			return (0);
	return ((char *)s);	
}

/*
#include <stdio.h>
int	main()
{
	char str[] = "Test string";

	printf("ft_strchr: [%s]\n", ft_strchr(str, 'e'));
	printf("strchr: [%s]\n", strchr(str, '\0'));
	return (0);
}
*/