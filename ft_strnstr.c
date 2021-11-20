/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 22:10:05 by hakim             #+#    #+#             */
/*   Updated: 2021/11/18 13:41:52 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	f;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		f = 0;
		while (haystack[i + f] == needle[f] && haystack[i + f] != '\0'
			&& i + f < len)
		{
			if (needle[f + 1] == '\0')
				return ((char *)&haystack[i]);
			f++;
		}
		i++;
	}
	return (NULL);
}
