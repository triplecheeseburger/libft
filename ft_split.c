/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:45:39 by hakim             #+#    #+#             */
/*   Updated: 2021/12/07 17:37:30 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
		while (s[i] == c && s[i] != '\0')
			i++;
	}	
	return (count);
}

static void	get_si(int *size, int *i, char const *s, char c)
{
	while (s[*i] != '\0' && s[*i] == c)
		*i += 1;
	while (s[*i] != '\0' && s[*i] != c)
	{
		*size += 1;
		*i += 1;
	}
}

static void	ft_free(char **big, int bigdex)
{
	int	index;

	index = bigdex - 1;
	while (index >= 0)
	{
		free(big[index]);
		big[index] = NULL;
		--index;
	}
	free(big);
	big = 0;
	return ;
}

static void	go_split(char **big, char const *s, char c, int bigdex)
{
	int	i;
	int	size;
	int	sindex;

	i = 0;
	while (s[i] != '\0')
	{
		size = 0;
		get_si(&size, &i, s, c);
		if (size == 0)
			continue ;
		big[bigdex] = (char *)malloc(sizeof(char) * (size + 1));
		if (big[bigdex] == 0)
		{
			ft_free(big, bigdex);
			return ;
		}
		sindex = 0;
		i -= size;
		while (sindex < size)
			big[bigdex][sindex++] = s[i++];
		big[bigdex][sindex] = '\0';
		++bigdex;
	}
	big[bigdex] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**big;
	int		size;
	int		bigdex;

	if (s == 0)
		return (0);
	size = wordcount(s, c);
	big = (char **)malloc(sizeof(char *) * (size + 1));
	if (big == 0)
		return (0);
	bigdex = 0;
	go_split(big, s, c, bigdex);
	return (big);
}	
