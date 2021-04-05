/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:00:49 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/04/05 12:53:39 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_uppercase(char c)
{
	if(c < 'A' || c > 'Z')
		return (0);
	else
		return (1);
}

char *ft_strlowcase(char *str)
{
	int index;
	char *c;

	index = 0;
	while (str[index] != '\0')
	{
		c = &str[index];
		if(ft_is_uppercase(*c))
			*c = *c + 32;
		index++;
	}
	return (str);
}
