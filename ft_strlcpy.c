/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:48:49 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/13 17:30:03 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	int		j;

	j = 0;
	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[j])
		j++;
	while (src[i] && i < dstsize - 1 && dstsize != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
/*int main ()
{
	char tab[] = "";
	char tab1[] ="ou";
	char tab2[] = "";
	char tab3[30] = "ou";
	int  d ;
	d = ft_strlcpy(tab1,tab,8);
	printf("my shit d = %d\n",d);
	printf("my shit s = %s\n",tab1);
	int dor = strlcpy(tab3,tab2,8);
	printf("original d = %d\n",dor);
	printf ("original s = %s",tab3);
}*/
