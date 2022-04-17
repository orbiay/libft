/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:20:47 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/17 12:20:52 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		return (&str[i]);
	return (0);
}
/*int main ()
{
	//if tania ila kant c = '\0' maghadich dkhol l while ghadi dkhol nichan l if();
	char tab[] = "oussa\0ma";
	char tab2[] = "oussa\0ma";
	char *s =strchr(tab2,'\0');
	char *d =ft_strchr(tab,'\0'); 
	printf("origine =  %s\n",s);
	printf("My shit =%s\n",d);
}*/
