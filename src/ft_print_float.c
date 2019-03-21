/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_float.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <tmann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 21:14:13 by tmann             #+#    #+#             */
/*   Updated: 2019/03/21 17:51:41 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int			ft_print_float(t_print *po, va_list ap)
{
	double			nbr;
	long int		celoe;
	double			drobnoe;

	drobnoe = 0;
	nbr = va_arg(ap, double);
	celoe = nbr;
	ft_putnbr((int)celoe);
	po = NULL;
	return (1);
}
