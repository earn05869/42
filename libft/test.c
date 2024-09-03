/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: supanuso <supanuso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:20:33 by supanuso          #+#    #+#             */
/*   Updated: 2024/09/03 11:56:05 by supanuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	str[] = "lorem ipsum dolor sit amet";
	char	*sub;
	sub = ft_substr(str, 7, 10);
	printf("%s\n", sub);
	free (sub);
}

