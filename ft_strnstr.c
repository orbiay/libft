/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:22:55 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/17 12:22:58 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystak, const char *needle, size_t len)
{
	char	*n;
	char	*h;
	size_t	i;
	size_t	j;

	n = (char *)needle;
	h = (char *)haystak;
	i = 0;
	if (n[0] == '\0')
		return (h);
	while (h[i] && i < len)
	{
		j = 0;
		while (n[j])
		{
			if (h[i + j] == n[j] && i + j < len)
				j++;
			else
				break ;
		}
		if (n[j] == '\0')
			return (&h[i]);
		i++;
	}
	return (0);
}
/*int main ()
{
	char tab[] = "oh no not the empty string !";
	char chr[] = "";
	char tab1[] = "oh no not the empty string !";
	char chr1[] = "";
	printf("orginal = %s\n",strnstr(tab,chr,ft_strlen(tab)));
	printf("my shit = %s",ft_strnstr(tab1,chr1,ft_strlen(tab1)));
}*/
