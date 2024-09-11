/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:36:43 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/10 12:06:10 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

/*#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello, world!";
	char	dest1[6];
	char	dest2[7];
	char	dest3[20];
	char	dest4[14];

	printf("src: %s\n", src);
	printf("dest1[6]: %s, copy 5, n=%u\n", dest1, ft_strlcpy(dest1, src, 5));
	printf("dest1[6]: %s, copy 10, n=%u\n", dest1, ft_strlcpy(dest1, src, 10));
	printf("dest2[7]: %s, copy 0, n=%u\n", dest2, ft_strlcpy(dest2, src, 0));
	printf("dest2[7]: %s, copy 3, n=%u\n", dest2, ft_strlcpy(dest2, src, 3));
	printf("dest3[20]: %s, copy 17, n=%u\n", dest3, ft_strlcpy(dest3, src, 17));
	printf("dest4[14]: %s, copy 13, n=%u\n", dest4, ft_strlcpy(dest4, src, 13));
	return (0);
}*/
