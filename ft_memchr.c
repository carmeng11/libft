/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:20:38 by cagomez-          #+#    #+#             */
/*   Updated: 2024/10/02 19:20:42 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*st;
	size_t			i;

	st = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (st[i] == (char)c)
			return ((unsigned char *)&st[i]);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	unsigned char	s[] = "Hello World";
	size_t			n;
	int				c;

	c = 'l';
	n = 5;
	//ft_memchr(s, c, n);	
	printf("La cadena devuelve: %s", (char *)ft_memchr(s, c, n));
	return (0);
}*/
