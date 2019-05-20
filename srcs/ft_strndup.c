/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strndup.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/20 16:58:24 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/05/20 16:59:15 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char *src, size_t nb)
{
	size_t	len;
	size_t	dest_len;
	char	*dest;
	size_t	i;

	len = ft_strlen(src);
	if (len == 0 || nb == 0)
		return (0);
	dest_len = nb;
	dest = (char*)malloc(sizeof(char) * (dest_len + 1));
	if (!dest)
		return (0);
	dest[dest_len] = '\0';
	i = 0;
	while (i < nb)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
