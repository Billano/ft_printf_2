/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eurodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 19:44:00 by eurodrig          #+#    #+#             */
/*   Updated: 2016/12/05 19:45:18 by eurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_pwr(size_t n, int pwr)
{
	int		i;

	i = 1;
	if (pwr == 0)
		return (1);
	while (i < pwr)
	{
		n *= 10;
		i++;
	}
	return (n);
}
