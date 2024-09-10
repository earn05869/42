/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: supanuso <supanuso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:16:34 by supanuso          #+#    #+#             */
/*   Updated: 2024/09/10 00:19:07 by supanuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (i < ft_strlen(s))
	{
		f(i, &s[i]);
		i++;	
	}
}
