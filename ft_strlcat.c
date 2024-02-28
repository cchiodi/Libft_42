/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchiodi <cchiodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 09:45:45 by cchiodi           #+#    #+#             */
/*   Updated: 2024/01/12 09:49:43 by cchiodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dsize;
	size_t	i;

	dsize = 0;
	while (dsize < size && dst[dsize])
		dsize++;
	i = 0;
	while (src[i] && dsize + i + 1 < size)
	{
		dst[dsize + i] = src[i];
		i++;
	}
	if (dsize < size)
		dst[dsize + i] = '\0';
	return (dsize + ft_strlen(src));
}
