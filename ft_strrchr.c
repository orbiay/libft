/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:23:20 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/18 10:21:11 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*str;

	str = (char *)s;
	len = 0;
	while (str[len])
		len++;
	while (len >= 0)
	{
		if (str[len] == (char)c)
			return (&str[len]);
		len--;
	}
	return (0);
}
/*int main ()
{
	char tab[] ="ou\0ssama";
	char tab1[] = "ou\0ssama";
	char *s = strrchr(tab1,'\0');
	char *str = chr(tab ,'\0');
	printf("original = %s\n",s);
	printf("ft  = %s",str);
}*/
