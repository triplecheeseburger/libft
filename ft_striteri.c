/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:59:18 by hakim             #+#    #+#             */
/*   Updated: 2021/11/08 17:53:48 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;
	size_t			len;

	if (s == 0)
		return ;
	len = ft_strlen(s);
	index = 0;
	while (index < len)
		(*f)(index++, s++);
}
