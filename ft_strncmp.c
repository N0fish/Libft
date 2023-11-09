/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:37:38 by algultse          #+#    #+#             */
/*   Updated: 2023/11/09 15:16:49 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] && s2[i]) && i < n)
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int	main()
{
	char str1[] = "Test strisnt";
	char str2[] = "Test strisns";
	
	printf("ft_strrchr: [%d]\n", ft_strncmp(str1, str2, (size_t)20));
	printf("strrchr: [%d]\n", strncmp(str1, str2, (size_t)20));
	return (0);
}
*/