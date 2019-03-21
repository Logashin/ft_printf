/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mod_lenght_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <tmann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 20:13:43 by tmann             #+#    #+#             */
/*   Updated: 2019/03/21 16:06:44 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

char		*ft_add_l_p_mod_length(t_print *po, va_list ap,
	unsigned long long int n)
{
	n = va_arg(ap, unsigned long long int);
	if (po->length == H)
		n = (unsigned short int)n;
	else if (po->length == HH)
		n = (unsigned char)n;
	else if (po->length == L)
		n = (unsigned long int)n;
	else if (po->length == LL)
		n = (unsigned long long int)n;
	else if (po->length == LLL)
		n = (unsigned long long)n;
	else
		n = (unsigned long int)n;
	return (ft_utoa_base_little(n, 16));
}

double		ft_add_f_mod_length(t_print *po, va_list ap,
	double long n)
{
	n = va_arg(ap, double long);
	if (po->length == H)
		n = (double)n;
	else if (po->length == HH)
		n = (double)n;
	else if (po->length == L)
		n = (double long)n;
	else if (po->length == LL)
		n = (double long)n;
	else if (po->length == LLL)
		n = (double long)n;
	else
		n = (double)n;
	return (n);
}
