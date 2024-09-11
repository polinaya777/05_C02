/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:19:48 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/09 19:28:32 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[11] = "abCdEfghIj";
	char	str2[11] = "AB def_567";

	printf("str1 : %s\n", str1);
	printf("str1 : %s\n", ft_strlowcase(str1));
	printf("str2 : %s\n", str2);
	printf("str2 : %s\n", ft_strlowcase(str2));
	return (0);
}*/
