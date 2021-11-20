/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:49:20 by hakim             #+#    #+#             */
/*   Updated: 2021/11/08 18:10:27 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	getlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		++len;
	while (n)
	{
		++len;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		index;
	char	*result;

	len = getlen(n);
	result = malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return (0);
	result[len] = '\0';
	if (n == 0)
		result[0] = '0';
	else if (n < 0)
		result[0] = '-';
	index = len - 1;
	while (n != 0)
	{
		result[index] = ft_abs(n % 10) + '0';
		n /= 10;
		--index;
	}
	return (result);
}
