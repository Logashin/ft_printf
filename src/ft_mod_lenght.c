/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mod_lenght.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <tmann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:11:52 by tmann             #+#    #+#             */
/*   Updated: 2019/03/13 19:21:32 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

char	*ft_add_d_mod_length(t_print *po, va_list ap, long long int n)
{
	n = va_arg(ap, long long int);
	if (po->length == H)
		n = (short int)n;
	else if (po->length == HH)
		n = (char)n;
	else if (po->length == L)
		n = (long int)n;
	else if (po->length == LL)
		n = (long long int)n;
	else if (po->length == LLL)
		n = (long long)n;
	else
		n = (int)n;
	return (ft_l_itoa(n));
}
