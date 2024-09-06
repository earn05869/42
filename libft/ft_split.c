/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: supanuso <supanuso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:13:17 by supanuso          #+#    #+#             */
/*   Updated: 2024/09/06 15:46:56 by supanuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

size_t	ft_countsub(char *s, char c)
{
	size_t	i;
	size_t	sub;

	i = 0;
	sub = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			sub++;
			i++;
			if (s[i] == c)
			{
				while (s[i + 1] == c)
					i++;
				sub++;
			}
		}
		i++;
	}
	return (sub);
}

size_t	*ft_setpos(char *s, char c, size_t sub)
{
	size_t	*pos;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	pos = (size_t *)malloc(sub * sizeof(size_t));
	if (!pos)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			pos[j++] = i++;
			if (s[i] == c)
			{
				while (s[i + 1] == c)
					i++;
				pos[j++] = i;
			}
		}
		i++;
	}
	return (pos);
}
// char	**ft_setsub(char **set_str, char *s, char c, size_t *pos)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	set_len;

// 	j = 0;
// 	i = 0;
// 	set_len = sizeof(pos) / sizeof(pos[0]);
// 	while (j < set_len)
// 	{
// 		set_str[j] = (char *)malloc((j - i + 1) * sizeof(char));
// 		if (!set_str[j])
// 			return (NULL);
// 		while (i < pos[j])
// 		{
// 			set_str[j] = s[i];
// 			i++;
// 		}
// 		j++;
// 	}
// 	return (set_str);
// }
// char	**ft_split(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	sub;
// 	char	**set_str;

// 	i = 0;
// 	if (ft_strlen(s) == 0)
// 		return (NULL);
// 	sub = ft_countsub(s, c);
// 	while (s[i])
// 	{
// 		if (s[i] == c && s[i + 1] != c)
// 			sub++;
// 	}
// 	set_str = (char **)malloc(sub * sizeof(char *));
// 	if (!set_str)
// 		return (NULL);
// 	set_str = ft_setsub(set_str, s, c, ft_setpos(s, c, sub));
// }


int main(void)
{
	char str[] = ",234,,,123,,,345,567,,,,,,,,,,,,,,,,,,,,,,";
	char c = ',';
	size_t	count;
	count = ft_countsub(str, c);
	printf("count sub: %zu \nsub position: ", count);
	size_t	loop;
	size_t *pos = ft_setpos(str, c, count);
	for(loop = 0; loop < count; loop++)
		printf("%zu, ", pos[loop]);
	printf("\n");
	free(pos);
	return (0);
}

