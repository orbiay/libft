/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:06:32 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/17 12:06:37 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
/*int main ()
{
	char  tab[] = "oussama.kg";
	char tab1[]= "oussama.kg";
	bzero(tab +5, 3);
	printf("%s\n",tab);
	ft_bzero(tab1+5 ,3);
	printf("%s",tab1);

}*/
