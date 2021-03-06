/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redna <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:13:47 by redna             #+#    #+#             */
/*   Updated: 2021/10/30 14:16:04 by redna            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_tolower(int	ch)
{
	if (ft_isalpha(ch))
	{
		if (ch >= 'A' && ch <= 'Z')
			return (ch + 32);
		else
			return (ch);
	}
	else
		return (ch);
}
