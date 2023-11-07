#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	len;

	len = 0;
	while (s1[len])
		len++;
	dst = malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return NULL;
	len = 0;
	while (s1[len])
	{
		dst[len] = s1[len];
		len++;
	}
	dst[len] = '\0';
	return (dst);
}

/*
#include <stdio.h>
int	main()
{
	char *crs = "01234";
	char *duplicate;

	// duplicate = strdup(crs);
	duplicate = ft_strdup(crs);
	printf("crs: [%s]\n", crs);
	printf("strdup(duplicate): [%s]\n", duplicate);
	free(duplicate);
	return (0);
}
*/