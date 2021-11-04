/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redna <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:36:46 by redna             #+#    #+#             */
/*   Updated: 2021/11/04 11:58:44 by redna            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	while (*s || (*s == '\0' && c == '\0'))
	{
		if (*s == c)
			p = ((char *) s);
		s++;
	}
	if (c == '\0')
		p = ((char *) s);
	return (p);
}