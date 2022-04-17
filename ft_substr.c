/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:24:11 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/17 12:24:16 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;
	unsigned int	size_sub_str;

	i = 0;
	if (!s)
		return (0);
	if (start >= (unsigned int)ft_strlen(s))
	{
		str = malloc(1);
		str[0] = '\0';
		return (str);
	}
	size_sub_str = min(ft_strlen(s) - start, len);
	str = malloc((size_sub_str + 1));
	if (str == 0)
		return (NULL);
	while (i < size_sub_str)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*int main ()                     
{
    min kandiroh bach matalen ila kan 3amdma len = 100 o ana 3andi 
	ghitr 7 mahjadichn aloki 100 ghadi ndi size dyal str -  mnin ghadi nbda (start)
	char tab[] ="oussama";
   printf("%s",ft_substr(tab,3,5));
   // line 37 kan copmpariw chnohowa sghir wach len wlla start
}*/
/*int main ()
{
    	char	str[] = "lorem ipsum dolor sit amet";
	    char	*strsub;
      printf("%s",ft_substr(str, 7, 0));
}*/
