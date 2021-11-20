/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 23:38:01 by hakim             #+#    #+#             */
/*   Updated: 2021/11/18 22:12:30 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_nulloc(void)
{
	char	*result;

	result = malloc(1);
	result[0] = '\0';
	return (result);
}

static int	is_set(char c, char const *set)
{
	int	index;

	index = 0;
	while (set[index] != '\0')
	{
		if (set[index] == c)
			return (1);
		++index;
	}
	return (0);
}

static size_t	trimcount(char const *s1, char const *set, int dir)
{
	int	count;
	int	index;

	count = 0;
	index = -1;
	if (dir == 1)
		while (is_set(s1[++index], set))
			++count;
	if (dir == -1)
	{
		while (s1[++index] != '\0')
			;
		while (is_set(s1[--index], set) && index != 0)
			++count;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	flen;
	size_t	rlen;
	size_t	index;
	char	*result;

	if (s1 == 0 || set == 0)
		return (0);
	flen = trimcount(s1, set, 1);
	rlen = trimcount(s1, set, -1);
	if (flen + rlen > ft_strlen((char *)s1))
		return (ft_nulloc());
	result = malloc(sizeof(char) * (ft_strlen((char *)s1) - flen - rlen + 1));
	if (result == 0)
		return (0);
	index = 0;
	while (s1[flen + index + rlen] != '\0')
	{
		result[index] = s1[flen + index];
		index++;
	}
	result[index] = '\0';
	return (result);
}
