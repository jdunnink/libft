/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 09:50:57 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/03/22 15:13:11 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_isalpha(int c)
{
	if ((c >= 97 && c <= 122) ||
		(c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

static	int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int			ft_isalnum(int c)
{
	if (ft_isalpha(c) != 0 || ft_isdigit(c) != 0)
		return (1);
	else
		return (0);
}
