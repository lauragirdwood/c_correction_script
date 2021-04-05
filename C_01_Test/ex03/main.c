/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 02:17:15 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/04/03 02:29:58 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a = 15;
	int b = 10;
	int div = 0;
	int mod = 0;
	printf("%d <-> %d | %d - %d\n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("%d <-> %d | %d - %d\n", a, b, div, mod);
	return (0);
}