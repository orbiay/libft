/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:15:45 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/17 12:15:53 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	int				j;
	char			*s;
	char			*d;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	j = 0;
	if (n == 0)
		return (d);
	if (!d && !s)
		return (NULL);
	while (i < n)
	{
		d[j] = s[i];
		i++;
		j++;
	}
	return (d);
}
/*int main ()
{
	char *src = "test basic du memcpy !";
	char dest[] ="chihaja";
	//char buff2[22];
 // 	printf("%s",ft_memcpy(dest,src,24));
	//char  tab[] = "imaddine";
//	char  tab1[] = "harile";
	//char  tab2[] = "imaddine";
	//char  tab3[] = "harile";
	 printf ("%s\n", ft_memcpy(dest ,src, 4));
 	// printf("%d\n", tab2[0]);
	// printf("%d\n",tab2[1]);
	// printf("%d\n", tab2[2]);
	// printf("%s\n",tab2);
	//printf("oussama\n");
 	 //memcpy(NULL,NULL,0);
	// printf("%d\n", tab[0]);
	// printf("%d\n",tab[1]);
	// printf("%d\n", tab2[2]);
	 //printf("%s\n",tab);*/
//	printf("my chit = %d\n",s);
//	printf("orginal = %d",memcpy(tab,tab1,2));
//
//}
