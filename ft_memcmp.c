/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:15:19 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/17 12:15:25 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*s3;

	s = (unsigned char *) s1;
	s3 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (s[i] != s3[i])
			return (s[i] - s3[i]);
		i++;
	}
	return (0);
}
