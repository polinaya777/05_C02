/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:51:19 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/09 09:50:29 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	str1[11] = "abcdefghij";
	char	str2[11] = "abcdef0hij";

	printf("%s : %d\n", str1, ft_str_is_alpha(str1));
	printf("%s : %d\n", str2, ft_str_is_alpha(str2));
	return (0);
}*/
