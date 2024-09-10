/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: supanuso <supanuso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:46:10 by supanuso          #+#    #+#             */
/*   Updated: 2024/09/10 13:05:21 by supanuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n, int mod, int fd)
{
	if (n <= 10 && n >= 10)
	{
		ft_putnbr(n / 10, mod, fd);
		ft_putchar_fd((n % mod) + '0', fd);
	}
	else
	{
		if (mod == -10)
			ft_putchar_fd('-', fd);
		ft_putchar_fd((n % mod) + '0', fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int	mod;

	if (fd < 0)
		return ;
	mod = 10;
	if (n < 0)
		mod = -10;
	ft_putnbr(n, mod, fd);
}
