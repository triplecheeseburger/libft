/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:12:17 by hakim             #+#    #+#             */
/*   Updated: 2021/10/20 16:57:21 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	size_t			len;
	char			*result;

	if (s == 0)
		return (0);
	len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return (0);
	result[len] = '\0';
	index = 0;
	while (index < len)
	{
		result[index] = (*f)(index, s[index]);
		index++;
	}
	return (result);
}
