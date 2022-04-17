/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:14:08 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/17 12:14:13 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	len_intiger(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * (-1);
		i++;
	}
	while (n >= 0)
	{
		n = n / 10;
		i++;
		if (n == 0)
			break ;
	}
	return (i);
}

static char	*putnbr(long n, int len)
{
	char	*result;

	result = malloc(len + 1);
	if (result == 0)
		return (0);
	result[len] = '\0';
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	len--;
	if (n < 0)
	{
		result[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		result[len] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		len_int;
	long	nb;
	char	*str;

	nb = n;
	len_int = len_intiger(nb);
	str = putnbr(nb, len_int);
	return (str);
}
/*int main ()
{
	//dert long int bach nhandli l min int 
    printf("%s",ft_itoa(0));
}*/
