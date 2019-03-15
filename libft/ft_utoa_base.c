/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <tmann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 16:36:54 by tmann             #+#    #+#             */
/*   Updated: 2019/03/15 16:47:53 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			nbrlen(unsigned long long nbr, unsigned long long base)
{
	int i;

	i = 0;
	if (nbr == 0)
		i++;
	while (nbr > 0)
	{
		nbr /= base;
		i++;
	}
	return (i);
}

char		*ft_utoa_base(unsigned long long nbr, int base)
{
	char				*str;
	unsigned long long	len;

	len = nbrlen(nbr, base);
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		if (nbr % base < 10)
			str[--len] = nbr % base + '0';
		else
			str[--len] = nbr % base + 'A' - 10;
		nbr /= base;
	}
	return (str);
}
