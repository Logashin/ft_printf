/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <tmann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 13:02:44 by tmann             #+#    #+#             */
/*   Updated: 2019/03/11 13:41:37 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_print_int(t_print *po, va_list ap)
{
	int dec;

	dec = 0;
	po = NULL;
	dec = va_arg(ap, int);
	ft_putnbr(dec);
	return (1);
}
