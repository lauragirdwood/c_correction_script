/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:00:49 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/04/06 16:37:44 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_copy(char *dest, char *src, unsigned int n, unsigned int index)
{
	if (index < n)
	{
		ft_copy(dest, src, n, index + 1);
		dest[index] = src[index];
	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	ft_copy(dest, src, n, 0);
	return (dest);
}
