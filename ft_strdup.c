/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:21:10 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/17 12:21:16 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*copy;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	copy = malloc(i + 1 * sizeof(char));
	if (copy == 0)
		return (NULL);
	while (s1[j])
	{
		copy[j] = s1[j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}
/*int main ()
{		//copy = malloc(i + 1 * sizeof(char)); i + 1 bach na lloki 7ta '\0'

    char tab[] = "";
	char tab1[] = "";
	printf("my shit = %s\n",ft_strdup(tab));
	printf("%s",strdup(tab1));
}*/
