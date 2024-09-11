/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:05:28 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/09 10:12:37 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	str1[11] = "ABCDEFGHIJ";
	char	str2[11] = "ABCDEFGHIj";

	printf("%s : %d\n", str1, ft_str_is_uppercase(str1));
	printf("%s : %d\n", str2, ft_str_is_uppercase(str2));
	return (0);
}*/
