/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printbits.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/02 11:35:23 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/04/02 14:11:54 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printbits(unsigned char octet)
{
	unsigned char div;

	div = 128;
	while (div != 1)
	{
		if (octet / div == 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		octet = octet % div;
		div = div / 2;
	}
	if (div == 1)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}
