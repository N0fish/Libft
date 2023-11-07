#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return(0);
}

/*
#include <stdio.h>
int	main()
{
	const char str1[5]= "06";
	const char str2[5]= "06";
	int i = ft_memcmp(str1, str2, (size_t)5);
	// int i = memcmp(str1, str2, (size_t)5);
	printf ("int: %d\n", i);
	return (0);
}
*/