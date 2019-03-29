/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 16:43:14 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/03/28 17:21:16 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c2;

	str = (unsigned char*)s;
	c2 = (unsigned char)c;
	while (n > 0)
	{
		if (*str == c2)
			return (str);
		str++;
		n--;
	}
	return (0);
}
