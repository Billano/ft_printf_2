/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x_helper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eurodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 21:41:34 by eurodrig          #+#    #+#             */
/*   Updated: 2017/03/14 21:41:36 by eurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

size_t	ft_printf_x_z(va_list ap, t_param *params)
{
	size_t		n;
	char		*nbr;
	size_t		length;

	length = 0;
	n = va_arg(ap, size_t);
	nbr = ft_uitoa_base_l(n, 16);
	length = ft_strlen(nbr);
	if (ft_printf_str_contains(params->flags, '#') && length == 1 && *nbr == '0')
		params->sign = -1;;
	if (ft_printf_str_contains(params->flags, '#'))
		length += 2;
	ft_print_d(params, length, nbr);
	length = ft_max_number(length,\
		ft_max_number(params->width, params->precision));
	return (length);
}

size_t	ft_printf_x_j(va_list ap, t_param *params)
{
	uintmax_t	n;
	char		*nbr;
	size_t		length;

	length = 0;
	n = va_arg(ap, uintmax_t);
	nbr = ft_uitoa_base_l(n, 16);
	length = ft_strlen(nbr);
	if (ft_printf_str_contains(params->flags, '#') && length == 1 && *nbr == '0')
		params->sign = -1;
	if (ft_printf_str_contains(params->flags, '#'))
		length += 2;
	ft_print_d(params, length, nbr);
	length = ft_max_number(length,\
		ft_max_number(params->width, params->precision));
	return (length);
}

size_t	ft_printf_x_ll(va_list ap, t_param *params)
{
	unsigned long long int	n;
	char			*nbr;
	size_t			length;

	length = 0;
	n = va_arg(ap, unsigned long long int);
	nbr = ft_uitoa_base_l(n, 16);
	length = ft_strlen(nbr);
	if (ft_printf_str_contains(params->flags, '#') && length == 1 && *nbr == '0')
		params->sign = -1;
	if (ft_printf_str_contains(params->flags, '#'))
		length += 2;
	ft_print_d(params, length, nbr);
	length = ft_max_number(length,\
		ft_max_number(params->width, params->precision));
	return (length);
}
