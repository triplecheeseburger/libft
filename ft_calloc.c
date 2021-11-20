/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:54:40 by hakim             #+#    #+#             */
/*   Updated: 2021/11/09 15:42:48 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*ptr;

	if (nmeb == 0 || size == 0)
	{
		nmeb = 1;
		size = 1;
	}
	ptr = malloc(nmeb * size);
	if (ptr == 0)
		return (NULL);
	ft_bzero(ptr, nmeb * size);
	return (ptr);
}
