/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:12:14 by algultse          #+#    #+#             */
/*   Updated: 2023/11/14 16:19:51 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write (fd, &*s, 1);
		s++;
	}
}

/*
#include <stdio.h>
int main()
{
	ft_putstr_fd("salut", 1);
	return (0);
}
*/