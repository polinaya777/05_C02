/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:21:33 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/11 10:58:31 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//function: print size of str using write
void	ft_putstr(char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

//function: convert and print hexadecimal
void	ft_hex(unsigned long long num, int len)
{
	int		i;
	char	hex_digits[17];
	char	result[16];

	i = -1;
	while (++i < 16)
		hex_digits[i] = "0123456789abcdef"[i];
	i = len - 1;
	while (i >= 0)
	{
		result[i] = hex_digits[num % 16];
		num /= 16;
		i--;
	}
	ft_putstr(result, len);
}

//function: print size of str showing non-printable as .
void	ft_print_non_printable(unsigned char *mem, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (mem[i] >= 32 && mem[i] <= 126)
			write(1, &mem[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

//function: print line of memory
void	ft_print_line(unsigned char *mem, unsigned int size
		, unsigned int i, unsigned int j)
{
	ft_hex((unsigned long long)(mem + i), 16);
	write(1, ":", 1);
	write(1, " ", 1);
	while (j < 16 && (i + j) < size)
	{
		ft_hex(mem[i + j], 2);
		if (j % 2 == 1)
			write(1, " ", 1);
		j++;
	}
	while (j < 16)
	{
		ft_putstr("   ", 3);
		if (j % 2 == 1)
			write(1, " ", 1);
		j++;
	}
	if (size - i < 16)
		ft_print_non_printable(mem + i, size - i);
	else
		ft_print_non_printable(mem + i, 16);
	write(1, "\n", 1);
}

//key function to print memory
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*mem;

	i = 0;
	mem = (unsigned char *)addr;
	while (i < size)
	{
		ft_print_line(mem, size, i, 0);
		i += 16;
	}
	return (addr);
}

/*int	main(void)
{
	char	str[] = "This is a test string to display memory.\n";

	ft_print_memory(str, 74);
	return (0);
}*/
