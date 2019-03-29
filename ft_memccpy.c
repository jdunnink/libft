/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 18:22:18 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/03/29 12:39:51 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*s1;
	char			*s2;
	char			*ptr;
	unsigned int	i;

	s1 = (char *)dst;
	s2 = (char *)src;
	i = 0;
	ptr = 0;
	while (i < n && ptr == 0)
	{
		s1[i] = s2[i];
		if (s1[i] == ((char)c))
			ptr = &s1[i] + 1;
		i++;
	}
	return (ptr);
}
