/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:16:43 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/17 12:16:49 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	a;
	unsigned char	*ptr;

	i = 0;
	a = (unsigned char) c;
	ptr = (unsigned char *) b;
	while (i < len)
	{
		ptr[i] = a;
		i++;
	}
	return (ptr);
}
/*int main ()
{
	char  tab[7]= "012345";
	ft_memset(tab, 50, 6);
	int i = 0;
	while(i < 20) 
	{
		printf("%p\n", &tab[i]);
		i++;
	}
}*/
