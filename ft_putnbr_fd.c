/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:53:20 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/17 11:43:19 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void static	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;

	i = n;
	if (i < 0)
	{
		ft_putchar('-', fd);
		i = -i;
	}
	if (i >= 0 && i < 10)
	{
		ft_putchar(i + '0', fd);
	}
	else if (i > 9)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putnbr_fd(i % 10, fd);
	}
}	
/*int main ()
{
    int fd = open ("oussama",1);
    ft_putnbr_fd(-2147483648,fd);
    write(1,"\n",1);
}*/
