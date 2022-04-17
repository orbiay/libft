/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:22:33 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/17 12:22:37 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	unsigned char		*ts1;
	unsigned char		*ts2;

	i = 0;
	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	while ((ts1[i] || ts2[i]) && i < n)
	{
		if (ts1[i] != ts2[i])
			return (ts1[i] - ts2[i]);
		i++;
	}
	return (0);
}
/*int main ()
{
	char tab[] ="o5ssana";
	char tab1[] ="oussma";
	char tab2[] ="o5ssana";
	char tab3[] ="oussama";
	int d = strncmp(tab,tab1,4);
	int dft =ft_strncmp(tab2,tab3,4);
	printf ("%d\n",d);
	printf("%d",dft);
}*/
