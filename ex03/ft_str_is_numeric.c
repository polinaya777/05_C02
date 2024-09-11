/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:23:37 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/09 09:49:57 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str1[11] = "01234abcde";
	char	str2[11] = "0123456789";

	printf("%s : %d\n", str1, ft_str_is_numeric(str1));
	printf("%s : %d\n", str2, ft_str_is_numeric(str2));
	return (0);
}*/
