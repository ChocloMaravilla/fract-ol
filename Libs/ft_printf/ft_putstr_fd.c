/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmedina- <rmedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:37:55 by ruben             #+#    #+#             */
/*   Updated: 2023/12/07 16:08:24 by rmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int *strlen)
{
	if (!s)
		s = "(null)";
	while (*s && *strlen != -1)
	{
		ft_putchar(*s, strlen);
		s++;
	}
}