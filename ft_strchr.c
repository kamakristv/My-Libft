/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redna <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:25:39 by redna             #+#    #+#             */
/*   Updated: 2021/11/04 12:02:55 by redna            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s || (*s == '\0' && c == '\0'))
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}
