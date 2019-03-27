/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/22 17:11:34 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/03/25 15:35:15 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_negative(int *n)
{
	if (*n < 0)
	{
		*n *= -1;
		return (-1);
	}
	else
		return (0);
}

char		*ft_itoa(int n)
{
	char			*dest;
	unsigned int	len;
	int				neg;
	int				temp;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 0;
	temp = n;
	len = 2;
	if ((neg = is_negative(&n)) == -1)
		len++;
	while (temp /= 10)
		len++;
	if ((dest = (char*)malloc(sizeof(char) * len)) == 0)
		return (0);
	dest[--len] = '\0';
	while (len-- > 0)
	{
		dest[len] = 48 + (n % 10);
		n = n / 10;
	}
	if (neg == -1)
		dest[0] = '-';
	return (dest);
}
