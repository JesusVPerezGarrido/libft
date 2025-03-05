/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:18:46 by jeperez-          #+#    #+#             */
/*   Updated: 2025/03/05 13:55:07 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				index;

	index = 0;
	while (index < n)
	{
		if (((t_byte *)s1)[index] != ((t_byte *)s2)[index])
			return (((t_byte *)s1)[index] - ((t_byte *)s2)[index]);
		index++;
	}
	return (0);
}
