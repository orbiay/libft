/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:14:39 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/17 12:14:47 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	c = (unsigned char)c;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == c)
			return ((unsigned char *)&s[i]);
		i++;
	}
	return (0);
}
/*int main ()
{
	int  tab[] ={1,2,3,4,5,6};
	int  tab2[]= {1,2,3,4,5,6};
	int d = 53;
	int d2 = 53;
	int  *s =memchr(tab ,3,7);
	int  *s2 = ft_memchr(tab2,3,7);
	printf("my shit = %d\n",s2[0]);
	printf ("original fuction = %d",s[0]);
}*/
