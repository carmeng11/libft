#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include "ft_strlen.c"
#include "ft_strchr.c"
#include "ft_strdup.c"
#include "ft_substr.c"

char *ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	start = 0;
	end = ft_strlen(s1);

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (s1[start] && ft_strchr(set, s1[start]))
	start++;

	while (end >= start)
		end--;
	str = ft_substr(s1, start, end - start +1);
	return (str);
}

int	main(void)
{
	char	s1[] = "abababHi Simonbababa";
	char	set[] = "ab";

	printf("la cadena final es:%s", ft_strtrim(s1, set));
	return (0);
}
