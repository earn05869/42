// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   test.c                                             :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: supanuso <supanuso@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/08/29 19:20:33 by supanuso          #+#    #+#             */
// /*   Updated: 2024/09/09 17:38:58 by supanuso         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char str[] = ",234,,,123,,,345,567,,,,,,,,,,,,,,,,,,,,,,";
// 	char c = ',';
// 	char **split_result = ft_split(str, c);
// 	size_t	i = 0;
	
// 	while (split_result[i] != NULL)
// 	{
// 		printf("Substring %zu: %s\n", i + 1, split_result[i]);
// 		free(split_result[i]);
// 		i++;
// 	}
// 	free(split_result);
// 	return (0);
// }

