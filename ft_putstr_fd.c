/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:19:09 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/17 12:19:13 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}
/*int main()
{
    int fd = open("lol", 1);
    int f = open("oussama",1);
    ft_putstr_fd("\nhello oussama how are u let's go to the play ground",f);
    ft_putstr_fd("Hello ll", fd);
    
    //first step create file with touch 
    //2 - 
}*/
