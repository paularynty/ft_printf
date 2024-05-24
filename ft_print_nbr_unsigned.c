/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr_unsigned.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:13:16 by prynty            #+#    #+#             */
/*   Updated: 2024/05/23 12:13:20 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr_unsigned(unsigned int n)
{
	int		len;
	int		value;
	char	c;

	len = 0;
	if (n > 9)
	{
		value = ft_print_nbr_unsigned(n / 10);
		if (value == -1)
			return (value);
		len += value;
	}
	c = (n % 10) + '0';
	if (ft_print_char(c) < 0)
		return (-1);
	len++;
	return (len);
}
