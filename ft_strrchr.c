/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:46:34 by algultse          #+#    #+#             */
/*   Updated: 2023/11/09 10:58:56 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	p = s;
	while (*p)
		*p++;
	while (*p != (unsigned char)c)
		if (!p--)
			return (0);
	return ((char *)p);	
}

#include <stdio.h>
int	main()
{
	char str[] = "Test strint";
	
	printf("ft_strrchr: [%s]\n", ft_strrchr(str, 's'));
	printf("strrchr: [%s]\n", strrchr(str, 's'));
	return (0);
}