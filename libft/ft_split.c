/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: supanuso <supanuso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:38:25 by supanuso          #+#    #+#             */
/*   Updated: 2024/09/05 21:44:55 by supanuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	str_len;
	size_t	sub;
	char	**set_str;
	char	*tmp;

	sub = 1;
	tmp = s;
	str_len = ft_strlen(s);
	if (str_len == 0)
		return (NULL);
	while (*s)
	{
		if (*s == c)
				sub++;
		*s++;
	}

	set_str = (char **)malloc(sub * sizeof(char *));
	if (!set_str)
		return (NULL);
	s = tmp
	while (*s++)
	{
		
	}
	set_str = ft_setsub(set_str, s, c);
}