/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchiodi <cchiodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 09:44:49 by cchiodi           #+#    #+#             */
/*   Updated: 2024/01/12 09:48:36 by cchiodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d_buffer;
	unsigned char	*s_buffer;

	d_buffer = (unsigned char *)dest;
	s_buffer = (unsigned char *)src;
	if (!d_buffer && !s_buffer)
		return (NULL);
	while (n--)
		*(d_buffer + n) = *(s_buffer + n);
	return ((void *)d_buffer);
}
