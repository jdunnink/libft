/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 16:43:14 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/03/25 13:05:33 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

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
