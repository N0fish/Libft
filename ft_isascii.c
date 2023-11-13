/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:02:31 by algultse          #+#    #+#             */
/*   Updated: 2023/11/11 18:16:50 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	printf("ft_isascii: [%d]\n", ft_isascii('a'));
	printf("isascii: [%d]\n", isascii('a'));
	return (0);
}
*/