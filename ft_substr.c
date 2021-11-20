/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 23:05:43 by hakim             #+#    #+#             */
/*   Updated: 2021/11/18 14:29:18 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*result;

	index = 0;
	if (s == 0)
		return (0);
	if (len == 0 || start >= ft_strlen(s))
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
	result = malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return (0);
	while (index < len)
	{
		result[index] = s[start + index];
		index++;
	}
	result[index] = '\0';
	return (result);
}
