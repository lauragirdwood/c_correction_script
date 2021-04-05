/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:00:49 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/04/05 13:01:34 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_alpha(char c)
{
	if((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		return (0);
	else
		return (1);
}

int	ft_is_numeric(char c)
{
	if(c < '0' || c > '9')
		return (0);
	else
		return (1);
}

int ft_is_especial(char c)
{
	if(ft_is_alpha(c) || ft_is_numeric(c))
		return (0);
	else
		return (1);
}

void ft_to_upcase(char *c)
{
	if(*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

char *ft_strcapitalize(char *str)
{
	int index;

	index = 0;
	ft_strupcase(&str[index]);
	while (str[index] != '\0')
	{
		if(ft_is_especial(str[index]))
			ft_to_upcase(&str[index + 1]);
		index++;
	}
	return (str);
}
