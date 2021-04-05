/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 02:17:15 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/04/03 02:53:04 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int size = 4;
	int tab[4] = {5,7,9,3};
	int count = 0;
	while(count < size) {
		printf("%d ", tab[count]);
		count++;
	}
	printf("\n");
	count = 0;
	ft_rev_int_tab(tab, size);
	while(count < size) {
		printf("%d ", tab[count]);
		count++;
	}
	printf("\n");
	return (0);
}