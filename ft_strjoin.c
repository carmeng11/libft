/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:19:58 by cagomez-          #+#    #+#             */
/*   Updated: 2024/10/07 20:20:02 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int j;

	i = 0;
	j = 0;
	res = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if	(!res)
		return (NULL);
	/* copying s1 into our res string */
	while (s1[i])
		res[j++] = s1[i++];
    /* we have to reset i to 0, otherwise we won't copy s2
     * from the start
     */
	i = 0;
    /* copying s2 into our res string */
	while (s2[i])
        res[j++] = s2[i];
    /* !! don't forget to NUL-terminate the string !! */
	res[j] = 0;
    /* finallly, we can return the new string */
	return (res);
}