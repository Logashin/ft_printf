/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <tmann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 15:24:09 by tmann             #+#    #+#             */
/*   Updated: 2019/03/05 17:18:38 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "../header/ft_printf.h"

int main(void)
{
	ft_putnbr(ft_printf("a"));
	 write(1, "Hello", 5);
	return (0);
}
