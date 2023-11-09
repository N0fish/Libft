/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:43:41 by algultse          #+#    #+#             */
/*   Updated: 2023/11/09 14:36:36 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_dst;
	size_t	s_src;
	size_t	i;

	if (!dst || !src)
		return (0);
	while (src[s_src])
		++s_src;
	while (dst[s_dst] && dstsize > s_dst)
		++s_dst;
	if (s_dst >= dstsize)
		return (s_src + dstsize);
	i = 0;
	while (s_dst + i < dstsize - 1 && src[i])
	{
		++i;
		dst[s_dst + i] = src[i];
	}
	dst[s_dst + i] = '\0';
	return (s_dst + s_src);
}

/*
#include <stdio.h>
int	main()
{
	char src[] = "Test string";
	char dst[12] = "0123456789";

	size_t result = ft_strlcat(dst, src, sizeof(dst));
	// size_t result = strlcat(dst, src, sizeof(dst));
	printf("strlcat вернула: %zu\n", result);
	printf("dst теперь содержит: '%s'\n", dst);
	return (0);
}
*/