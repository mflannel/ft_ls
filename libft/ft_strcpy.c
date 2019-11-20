/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchau <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 21:53:19 by hchau             #+#    #+#             */
/*   Updated: 2019/11/20 21:51:19 by nick             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char const *src)
{
	size_t		a;
	size_t		len;

	a = 0;
	if (dest != src)
	{
		len = ft_strlen(src);
		while (src[a] && a < len)
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	return (dest + a);	//внимание!!! было return (dest);
}
