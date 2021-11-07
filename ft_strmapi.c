/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redna <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:19:02 by redna             #+#    #+#             */
/*   Updated: 2021/11/07 17:24:26 by redna            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				len;
	char			*ans;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	ans = (char *) malloc(sizeof(char) * (len + 1));
	if (!ans)
		return (NULL);
	ans = ft_memcpy(ans, s, len + 1);
	while (ans[i])
	{
		ans[i] = (*f)(i, ans[i]);
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
}
