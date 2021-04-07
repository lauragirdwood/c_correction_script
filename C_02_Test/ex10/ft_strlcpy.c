/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:00:49 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/04/07 03:44:24 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int count;

	count = 0;
	while (count < size)
	{
		if (count == (size - 1))
			dest[count] = '\0';
		else
			dest[count] = src[count];
		count++;
	}
	return (ft_strlen(src));
}