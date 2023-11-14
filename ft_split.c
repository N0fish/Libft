/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:25:36 by algultse          #+#    #+#             */
/*   Updated: 2023/11/15 00:56:25 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**do_res_malloc(char const *s, char c)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
		if (s[i++] == c)
			n++;
	return ((char **) malloc(sizeof(char *) * (n + 1)));
}

char	*get_str_chunk(char const *s, char c, int len, int *p_start)
{
	char	*str;
	int		j;

	j = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!(str))
		return (NULL);
	while (s[*p_start] != c && s[*p_start])
	{
		str[j] = s[*p_start];
		(*p_start)++;
		j++;
	}
	str[j] = '\0';
	(*p_start)++;
	return (str);
}

void	zero_values(int *i, int *n, int *p_start)
{
	*i = 0;
	*n = 0;
	*p_start = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		n;
	int		p_start;

	res = do_res_malloc(s, c);
	if (!res)
		return (NULL);
	zero_values(&i, &n, &p_start);
	while (s[i])
	{
		if (s[i] == c)
		{
			res[n] = get_str_chunk(s, c, i - p_start, &p_start);
			if (!res[n])
				return (NULL);
			n++;
		}
		i++;
	}
	res[n] = get_str_chunk(s, c, i - p_start, &p_start);
	if (!res[n])
		return (NULL);
	return (res);
}

/*
#include <stdio.h>
int main()
{
	char **res = ft_split("Salut Hello Privet", ' ');
	while (*res)
		printf ("ft_split: [%s]\n", *res++);
	return (0);
}
*/