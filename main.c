#include <stddef.h>
#include <stdio.h>
#include "libft.h"

static void main_strncmp()
{
	size_t	n;
	char	s1[] = "abcdef";
	char	s2[] = "abc\375xx";

	n = 5;
	printf("la comparación da: %d", ft_strncmp(s1, s2, n));
}
