/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strclr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/22 14:05:01 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/03/27 13:00:12 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
		i++;
	ft_memset(s, '\0', i);
}
