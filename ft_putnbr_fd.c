/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:48:24 by hakim             #+#    #+#             */
/*   Updated: 2021/10/20 16:53:12 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	a[10];
	char	*min_int;
	int		i;

	min_int = "-2147483648";
	if (n == -2147483648)
	{
		write(fd, min_int, 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n == 0)
		write(fd, "0", 1);
	i = 9;
	while (n)
	{
		a[i--] = n % 10 + '0';
		n /= 10;
	}
	while (++i <= 9)
		write(fd, &a[i], 1);
}
