/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 02:17:15 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/04/03 02:31:15 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a = 15;
	int b = 10;
	printf("%d <-> %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d <-> %d\n", a, b);
	return (0);
}