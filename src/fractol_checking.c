/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmedina- <rmedina-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:52:25 by rmedina-          #+#    #+#             */
/*   Updated: 2024/06/16 03:47:25 by rmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_header.h"

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	checking_symbols(char arg)
{
	if(arg == '-' || arg == '+'|| arg == '.')
		return (0);
	else if(arg >= '0' && arg <= '9')
		return (0);
	else 
		return (1);
}

int	checking_err(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] == '.' && str[i - 1] == '+')
			return (1);
		if(str[i] == '.' && str[i - 1] == '-')
			return (1);	
		if(i == 0 && str[i] == '.')
			return (1);
		i++;
	}
	return (0);
}
int checking_type_of_set(char *str)
{
	if(!ft_strcmp(str, "julia"))
		return (1);
	if(!ft_strcmp(str, "mandelbrot"))
		return (2);
	if(!ft_strcmp(str, "tricorn"))
		return (3);
	return (0);
}

void lower_case_converter(char *str)
{
	int	i;
	i = 0;
	while(str[i])
	{
		if(ft_isalpha(str[i]) == 2)
			str[i] += 32;
		i++;
	}
}