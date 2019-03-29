/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplit.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/23 12:09:19 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/03/28 17:28:43 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		count_word(char const *s, char c)
{
	int x;

	x = 0;
	s++;
	if (*s == '\0')
		return (0);
	while (*s != '\0')
	{
		if (*s == c && *(s - 1) != c)
			x++;
		s++;
	}
	if (*s == '\0' && *(s - 1) != c)
		x++;
	return (x);
}

static	char	*word_cpy(char const *ptr, char c)
{
	int		i;
	char	*dest;

	i = 0;
	while (ptr[i] != c && ptr[i] != '\0')
		i++;
	if ((dest = (char*)malloc(sizeof(char) * i + 1)) == 0)
		return (NULL);
	i = 0;
	while (ptr[i] != c && ptr[i] != '\0')
	{
		dest[i] = ptr[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char			**ft_strsplit(char const *s, char c)
{
	char			**dest;
	unsigned int	psize;
	unsigned int	x;

	if (!s)
		return (NULL);
	psize = count_word(s, c);
	if ((dest = (char**)malloc(sizeof(char*) * (psize + 1))) == 0)
		return (NULL);
	while (*s == c)
		s++;
	x = 0;
	while (x < psize)
	{
		dest[x] = word_cpy(s, c);
		while (*s != c && *s != '\0')
			s++;
		if (x != psize - 1)
			s++;
		while (*s == c)
			s++;
		x++;
	}
	dest[x] = 0;
	return (dest);
}
