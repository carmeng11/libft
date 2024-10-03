/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_guide.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:44:04 by cagomez-          #+#    #+#             */
/*   Updated: 2024/09/30 18:44:15 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdio.h>*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = 0;
	while (src[src_len])
	{
		src_len++;
	}
	if (src_len + 1 < dstsize)
		ft_memcpy(dst, src, src_len + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = 0;
	}
	return (src_len);
}

/*int	main(void)
{
	unsigned int	i;
	char	src [50] = "Holatu";
	char	dst[50] = "Holatuuuuuuu";
	size_t	dstsize;
	
	i = 0;
	dstsize = 13;
	printf("Antes de la función el origen y el destino es: %s y %s", src, dst);
	printf("\nEl tamaño del buffer de destino es: %zu", dstsize);
	ft_strlcpy(dst, src, dstsize);
	printf("\nEl texto de destino después de la función es: %s\n", dst);
	printf("Tamaño de la cadena de origen %zu", ft_strlcpy(dst, src, dstsize));
	return (0);
}*/