/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memalloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/22 12:58:38 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/03/29 12:38:27 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *ptr;

	ptr = malloc(size);
	if (ptr)
	{
		ft_memset(ptr, 0, size);
		return (ptr);
	}
	return (0);
}
