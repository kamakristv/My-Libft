/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redna <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:44:14 by redna             #+#    #+#             */
/*   Updated: 2021/11/06 13:28:40 by redna            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_itoa(int	n)
{
	int		num; 
	int		count;
	char	*str;
    int     znak;

	count = 0;
	num = n;
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
    znak = 1;
    if (n < 0)
        znak = -1;
    count = count + (n <= 0);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if	(!str)
		return (str);
	if	(num == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
    str[count] = '\0';
    while (n != 0)
    {
        str[--count] = (char)((n % 10) * znak + '0');
        n = n / 10;
    }
    count--;
    if (znak < 0)
        str[count] = '-';
	return (str);
}
