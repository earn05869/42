/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: supanuso <supanuso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:10:08 by supanuso          #+#    #+#             */
/*   Updated: 2024/08/29 20:27:53 by supanuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*save;

	ch = c;
	save = NULL;
	while (*s)
	{
		if (*s == ch)
			save = (char *)s;
		s++;
	}
	return (save);
}
