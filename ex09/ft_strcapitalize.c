/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:30:42 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/09 20:15:04 by pyarova          ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if ((i == 0 || (!(str[i - 1] >= 'a' && str[i - 1] <= 'z') && !(
						str[i - 1] >= 'A' && str[i - 1] <= 'Z') && !(
						str[i - 1] >= '0' && str[i - 1] <= '9'))) && (
				str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "abCd fghIj 78Mn";
	char	str2[] = "ABc defg, 5kL";

	printf("str1 : %s\n", str1);
	printf("str1 : %s\n", ft_strcapitalize(str1));
	printf("str2 : %s\n", str2);
	printf("str2 : %s\n", ft_strcapitalize(str2));
	return (0);
}*/
