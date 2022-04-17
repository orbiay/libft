/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:17:37 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/17 12:18:31 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int main ()
{
   // int fd = open("test.txt",1);
    int f = open ("lol",1);
    int s = open ("oussama",1);
    //ft_putchar_fd('c',fd); 
     ft_putchar_fd('B',f);
     ft_putchar_fd('a',s);
    //printf("&d",fd);
}*/
