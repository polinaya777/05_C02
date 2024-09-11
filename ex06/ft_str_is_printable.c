/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:15:02 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/10 15:37:08 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	str1[11] = "ab12*-/HIJ";
	char	str2[11] = "abc90+&%$\t";

	printf("%s : %d\n", str1, ft_str_is_printable(str1));
	printf("%s : %d\n", str2, ft_str_is_printable(str2));
	return (0);
}*/
