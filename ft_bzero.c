/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redna <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 12:58:55 by redna             #+#    #+#             */
/*   Updated: 2021/10/31 13:01:33 by redna            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *buf, size_t count)
{
	size_t	n;

	n = 0;
	while (n < count)
	{
		((char *)buf)[n] = '\0';
		n++;
	}
}
