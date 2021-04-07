/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 19:56:05 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/04/07 14:01:15 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	while (s1[count] != '\0')
	{
		if (s1[count] != s2[count])
		{
			if (s1[count] < s2[count])
				return (-1);
			else
				return (1);
		}
		count++;
	}
	return (0);
}
