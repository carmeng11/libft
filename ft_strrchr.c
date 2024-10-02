/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 14:15:27 by cagomez-          #+#    #+#             */
/*   Updated: 2024/09/30 20:16:26 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
/*#include <stdio.h>
#include <stddef.h>
#include "libft.h"*/

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;
	char			*result;

	result = NULL;
	i = 0;
	cc = (char)c;
	while (s[i])
	{
		if (s[i] == cc)
			result = (char *)&s[i];
		i++;
	}
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (result);
}

/*int	main(void)
{
	const char s[] = "Here, in the cursus\0  ";
	int	c;
	
	c = 'e';
	printf("La función devuelve:%s\n", ft_strrchr(s, c));
	return (0);
}*/
