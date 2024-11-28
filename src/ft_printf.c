/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:21:22 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/28 13:58:41 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_int.h"

ssize_t	ft_printf(char const *str, ...)
{
	va_list lst;
	ssize_t	length;

	va_start(lst, str);
	length = ft_print_variadic(str, lst, STDIN_FILENO);
	va_end(lst);
	return (length);
}
