/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/22 13:39:18 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/03/25 15:28:13 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *ptr;

	if ((ptr = malloc(sizeof(char) * (size + 1))) == 0)
		return (NULL);
	ft_memset(ptr, '\0', size + 1);
	return (ptr);
}
