/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 22:00:00 by hakim             #+#    #+#             */
/*   Updated: 2021/11/18 23:40:52 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	last;

	last = ft_strlen(s) + 1;
	while (last)
	{
		--last;
		if (s[last] == (unsigned char)c)
			return ((char *)s + last);
	}
	return (NULL);
}
