/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:09:04 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/11 10:57:18 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex_digits[17];

	i = 0;
	ft_strcpy(hex_digits, "0123456789abcdef");
	while (str[i])
	{
		if (ft_is_printable(str[i]))
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_putchar(hex_digits[str[i] / 16]);
			ft_putchar(hex_digits[str[i] % 16]);
		}
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "ab1\n*-/HIJ";
	char	str2[] = "abc90+&\t%$";

	printf("printf: %s\n", str1);
	ft_putstr_non_printable(str1);
	printf("printf : %s\n", str2);
	ft_putstr_non_printable(str2);
	return (0);
}*/
