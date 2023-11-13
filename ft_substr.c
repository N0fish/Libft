/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:03:45 by algultse          #+#    #+#             */
/*   Updated: 2023/11/12 19:44:56 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;
	size_t			s_len;

	s_len = ft_strlen(s);
	if (!s || !len || start >= s_len)
		return (NULL);
	if (len > s_len - start)
		len = s_len - start;
	if(!(p = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (*s && len > 0)
	{
		p[i] = s[start + i];
		i++;
		len--;
	}
	p[i] = '\0';
	return (p);
}

/*
#include <stdio.h>
int main()
{
	printf ("ft_substr: [%s]\n", ft_substr("Hello", 0, (size_t)2));
	return (0);
}
*/