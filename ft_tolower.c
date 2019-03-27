/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 10:49:37 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/03/22 15:10:24 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

int			ft_tolower(int c)
{
	if (ft_isupper(c) == 0)
		return (c);
	else
		return (c + 32);
}
