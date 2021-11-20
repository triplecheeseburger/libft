/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:56:20 by hakim             #+#    #+#             */
/*   Updated: 2021/11/14 12:22:17 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_space(const char *str)
{
	int	index;

	index = 0;
	while (str[index] == ' ' || (str[index] >= 9 && str[index] <= 13))
		index++;
	return (index);
}

int	ft_atoi(const char *str)
{
	unsigned long long	result;
	int					plma;
	int					index;

	index = check_space(str);
	plma = 1;
	if (str[index] == '-')
		plma = -1;
	if (str[index] == '-' || str[index] == '+')
		index++;
	result = 0;
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = result * 10 + str[index] - '0';
		index++;
	}
	if (result > 9223372036854775807 && plma == 1)
		return (-1);
	else if (result > 9223372036854775808ULL && plma == -1)
		return (0);
	return ((int)result * plma);
}
