/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:00:49 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/04/06 18:10:12 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	else
		return (1);
}

char	*ft_strupcase(char *str)
{
	int		i;
	char	*c;

	i = 0;
	while (str[i] != '\0')
	{
		c = &str[i];
		if (ft_is_lowercase(*c))
			*c = *c - 32;
		i++;
	}
	return (str);
}
