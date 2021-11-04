/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redna <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:04:15 by redna             #+#    #+#             */
/*   Updated: 2021/11/01 18:10:04 by redna            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)arr;
	while (n > 0)
	{
		if (*str == (unsigned char)c)
			return (str);
		else
		{
			str++;
			n--;
		}
	}
	return (0);
}
