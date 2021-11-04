/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redna <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 14:52:17 by redna             #+#    #+#             */
/*   Updated: 2021/10/31 14:55:55 by redna            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	char	*a;
	char	*b;
	size_t	i;

	a = (char *)buf1;
	b = (char *)buf2;
	i = 0;
	if (count == 0)
		return (0);
	while (a[i] == b[i] && i < count - 1)
		i++;
	return ((unsigned char)a[i] - (unsigned char)b[i]);
}
