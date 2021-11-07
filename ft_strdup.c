/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redna <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:05:03 by redna             #+#    #+#             */
/*   Updated: 2021/11/05 13:32:58 by redna            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*str)
{
	char	*str_dup;
	char	*pointer;
	int		len;

	len = ft_strlen(str);
	str_dup = malloc(sizeof(char) * len + 1);
	pointer = str_dup;
	if (!str_dup)
		return (0);
	while (*str)
	{
		*str_dup = *str;
		str_dup++;
		str++;
	}
	*str_dup = '\0';
	return (pointer);
}
