/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 02:17:15 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/04/05 15:04:48 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b);

int	main(void)
{
	int a = 0;
	int b = 10;
	printf("%d <-> %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d <-> %d\n", a, b);
	return (0);
}