/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:00:49 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/04/06 18:19:20 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_copy(char *dest, char *src, int index)
{
	if (src[index] != '\0')
		ft_copy(dest, src, index + 1);
	dest[index] = src[index];
}

char	*ft_strcpy(char *dest, char *src)
{
	ft_copy(dest, src, 0);
	return (dest);
}
