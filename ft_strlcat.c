/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:50:28 by cagomez-          #+#    #+#             */
/*   Updated: 2024/10/09 18:50:42 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include "ft_memcpy.c"
#include <stdio.h>
#include "ft_strlen.c"*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen >= size)
		dstlen = size;
	if (dstlen == size)
		return (size + srclen);
	if (srclen < size - dstlen)
		ft_memcpy(dst + dstlen, src, srclen + 1);
	else
	{
		ft_memcpy(dst + dstlen, src, size - dstlen - 1);
		dst[size - 1] = '\0';
	}
	return (dstlen + srclen);
}

/*int	main(void)
{
	char	src[] = "Source";
	char	dst[] = "Destino";
        
        printf("Antes de usar strlcat\n%s\n", dst);
        printf("Después de usar strlcat\n");
        ft_strlcat(dst, src, 14);
        printf("Con la función ft_strlcat:%s\n", dst);
        //strlcat(dst, src, 14);
        //printf("Con la función strlcat:%s\n", dst);
        return (0);
}*/
