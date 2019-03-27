/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/22 09:02:44 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/03/27 10:16:07 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*x;
	size_t			i;

	x = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		x[i] = c;
		i++;
	}
	return (b);
}
