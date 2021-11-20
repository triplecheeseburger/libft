/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 23:17:41 by hakim             #+#    #+#             */
/*   Updated: 2021/11/18 22:15:43 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	index;
	char	*result;

	if (s1 == 0 && s2 == 0)
		return (0);
	else if (s1 == 0)
		return (ft_strdup(s2));
	else if (s2 == 0)
		return (ft_strdup(s1));
	len = ft_strlen((char *)s1);
	len += ft_strlen((char *)s2);
	result = malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return (0);
	index = 0;
	while (*s1 != '\0')
		result[index++] = *s1++;
	while (*s2 != '\0')
		result[index++] = *s2++;
	result[index] = '\0';
	return (result);
}
