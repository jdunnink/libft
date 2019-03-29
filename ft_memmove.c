/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 17:00:21 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/03/28 17:21:01 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*s2;
	size_t	i;

	i = -1;
	s1 = (char *)dst;
	s2 = (char *)src;
	if (s2 < s1)
		while ((int)(--len) >= 0)
			*(s1 + len) = *(s2 + len);
	else
		while (++i < len)
			*(s1 + i) = *(s2 + i);
	return (s1);
}
