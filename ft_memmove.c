/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:01:47 by hakim             #+#    #+#             */
/*   Updated: 2021/11/20 12:32:21 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == src || n == 0)
		return (dest);
	if (dest > src)
	{
		i = n;
		while (--i > 0)
			((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		return (dest);
	}
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		++i;
	}
	return (dest);
}
