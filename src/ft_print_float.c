/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_float.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <tmann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 21:14:13 by tmann             #+#    #+#             */
/*   Updated: 2019/03/24 20:56:17 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int			ft_print_float(t_print *po, va_list ap)
{
	double			nbr;
	long int		celoe;
	char			*drobstr;
	char			*celstr;
	int				sim;

	drobstr = NULL;
	nbr = va_arg(ap, double);
	celoe = nbr;
	if (po->accuracy == 0)
		drobstr = ft_float_ac_0(nbr, &sim);
	else if (po->accuracy > 0)
		drobstr = ft_float_ac_big(po, nbr, &sim);
	else if (po->accuracy == -1)
	{
		ft_float_ac_minus(po, nbr);
		return (1);
	}
	celstr = ft_l_itoa(celoe);
	// ft_roun(po, celstr, drobstr, sim);
	print_space_float(po, celstr, drobstr);
	return (1);
}

void		print_space_float(t_print *po, char *celstr, char *drobstr)
{
	char	*strjoin;

	strjoin = NULL;
	if (po->minus == 0)
	{
		ft_space_string_dec(celstr, po, ft_strlen(drobstr) + 1);
		ft_putchar('.');
		ft_putstr(drobstr);
	}
	else
	{
		strjoin = ft_strjoin(celstr, ft_strjoin(".", drobstr));
		ft_space_string_dec(strjoin, po, 0);
	}
}
