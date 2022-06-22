/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 00:23:54 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/06/16 00:40:04 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!str)
		return (0);
	i = 0;
	while (*s1)
	{
		str[i] = *s1;
		++s1;
		++i;
	}
	while (*s2)
	{
		str[i] = *s2;
		++s2;
		++i;
	}
	str[i] = 0;
	return (str);
}

/*
#include <stdio.h>
#include "ft_strlen.c"
int main(void)
{
	char *s1 = "hello ";
	char *s2 = "world";
	printf("  s1: %s\n  s2: %s\njoin: %s\n", s1, s2, ft_strjoin(s1, s2));
	
	return 0;
}
*/