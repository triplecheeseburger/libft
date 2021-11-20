/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 10:09:20 by hakim             #+#    #+#             */
/*   Updated: 2021/11/18 22:13:35 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len;
	size_t	index;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == 0)
		return (0);
	index = 0;
	while (index <= len)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
