/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:26:27 by jeperez-          #+#    #+#             */
/*   Updated: 2025/03/05 14:30:20 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*value;
	int		length;
	int		s2_len;

	if (!s1 || !s2)
		return (NULL);
	length = ft_strlen(s1);
	length += ft_strlen(s2);
	value = ft_calloc(sizeof(char), length + 1);
	if (!value)
		return (0);
	ft_strlcpy(value, s1, length + 1);
	ft_strlcat(value, s2, length + 1);
	return (value);
}
