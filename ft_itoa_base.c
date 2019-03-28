/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/28 11:43:59 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/03/28 16:45:04 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	long	int	ft_abs(long int nb)
{
	if (nb < 0)
		return (nb * -1);
	else
		return (nb);
}

static	long	int	ft_find_size(long int value, int base)
{
	int i;
	int neg;

	i = 0;
	neg = 0;
	if (value < 0 && base == 10)
		neg = 1;
	value = ft_abs(value);
	while (value > 0)
	{
		value /= base;
		i++;
	}
	return (i + neg);
}

char				*ft_itoa_base(int value, int base)
{
	int			len;
	long int	temp;
	char		*dest;
	char		*tab;

	temp = (long int)value;
	tab = "0123456789ABCDEF";
	if (base < 2 || base > 16)
		return (NULL);
	len = ft_find_size(temp, base);
	temp = ft_abs(temp);
	dest = ft_strnew(len);
	while (len--)
	{
		dest[len] = tab[(temp % base)];
		temp /= base;
	}
	if (value < 0 && base == 10)
		dest[0] = '-';
	return (dest);
}
