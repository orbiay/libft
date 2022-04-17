/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:16:11 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/17 12:16:17 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
		return (d);
	}
	else
		return (ft_memcpy (d, s, len));
}
/*int main ()
{
    char tab[] ="oussama";
    printf("%s",memmove(tab+3,tab,5));

    return(0);
}*/
