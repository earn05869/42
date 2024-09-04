/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: supanuso <supanuso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:20:33 by supanuso          #+#    #+#             */
/*   Updated: 2024/09/04 19:08:59 by supanuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	str[] = "lorem ipsum dolor sit amet";
	char	*sub;
	sub = ft_strtrim(str, "te");
	printf("%s\n", sub);
	free (sub);
}

