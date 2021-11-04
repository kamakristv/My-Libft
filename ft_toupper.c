/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redna <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:23:30 by redna             #+#    #+#             */
/*   Updated: 2021/10/30 12:53:14 by redna            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	if (ft_isalpha(ch))
	{
		if (ch >= 'a' && ch <= 'z')
			return (ch - 32);
		else
			return (ch);
	}
	else
		return (ch);
}
