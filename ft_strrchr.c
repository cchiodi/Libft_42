/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchiodi <cchiodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:08:34 by cchiodi           #+#    #+#             */
/*   Updated: 2024/01/17 15:56:22 by cchiodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		b;
	const char	*off;
	int			i;

	b = c;
	i = 0;
	off = s;
	while (s[i] != '\0')
		i++;
	while (s[i] != b && (s + i) != off)
		i--;
	if ((s + i) == off && b != *off)
		return (NULL);
	return ((char *)s + i);
}
