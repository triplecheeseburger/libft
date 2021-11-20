/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr:>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 09:18:44 by hakim             #+#    #+#             */
/*   Updated: 2021/10/20 12:21:29 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	index;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	index = 0;
	if (size < dst_len)
		return (src_len + size);
	else
	{
		while (dst_len + index + 1 < size && src[index] != '\0')
		{
			dst[dst_len + index] = src[index];
			index++;
		}
	}
	dst[dst_len + index] = '\0';
	return (dst_len + src_len);
}
