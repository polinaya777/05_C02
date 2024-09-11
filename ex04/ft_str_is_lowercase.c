/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:52:13 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/09 10:03:00 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	str1[11] = "abcdefghij";
	char	str2[11] = "abcdefghiJ";

	printf("%s : %d\n", str1, ft_str_is_lowercase(str1));
	printf("%s : %d\n", str2, ft_str_is_lowercase(str2));
	return (0);
}*/
