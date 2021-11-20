/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:30:43 by hakim             #+#    #+#             */
/*   Updated: 2021/11/11 22:35:20 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*origin;

	if (dest == 0 && src == 0)
		return (0);
	origin = dest;
	while (n--)
	{
		*(unsigned char *)dest = *(const unsigned char *)src;
		dest++;
		src++;
	}
	return (origin);
}
