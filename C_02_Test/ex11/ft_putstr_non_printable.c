/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:00:49 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/04/05 12:14:29 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return count;	
}

int		ft_is_printable(char c)
{
	if(c < 32 || c > 126)
			return (0);
	return (1);
}

char *ft_int_to_hexa(int n)
{
	char *n_hex;
	int digit;
	int rest;
	
	
	digit = (n % 16);
	if(digit > 9)
	{
		rest = digit - 10;
		digit = 97 + rest;
	}
	else
	n = n / 16;
	
	if (n > 0)
		ft_is_printable(n);
	return n_hex;
}

void	ft_putstr_non_printable(char *str)
{
	int count;

	count = 0;
	while(str[count] != '\0')
	{
		if(ft_is_printable(str[count]))
			ft_putchar(str[count]);
		else
		{
			
		}
		count++;
	}
}
