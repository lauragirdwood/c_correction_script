/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 02:17:15 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/04/05 15:09:45 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);

int	main(void)
{
	printf("%d", ft_strlen(""));
	printf("%d", ft_strlen("0"));
	printf("%d", ft_strlen("01"));
	printf("%d", ft_strlen("012"));
	printf("%d", ft_strlen("0123"));
	printf("%d", ft_strlen("01234"));
	printf("%d", ft_strlen("012345"));
	return (0);
}