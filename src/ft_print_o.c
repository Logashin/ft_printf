/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_o.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <tmann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 18:10:36 by tmann             #+#    #+#             */
/*   Updated: 2019/03/15 19:52:10 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int		ft_print_o(t_print *po, va_list ap)
{
	char *str;
	char *tmp;

	str = ft_add_o_mod_length(po, ap, 0);
	if (po->accuracy == -1 && *str == '0' && po->width == 0 && po->sharp == 0)
		return (1);
	if (po->accuracy == -1 && *str == '0' && po->width > 0 && po->sharp == 0)
		*str = ' ';
	if (po->sharp == 1 && *str != '0')
	{
		tmp = str;
		str = ft_strjoin("0", str);
		free(tmp);
	}
	if (po->accuracy == 0)
		ft_space_string_u(str, po);
	else
		ft_print_accuracy_u(str, po, 0, 0);
	free(str);
	return (1);
}
