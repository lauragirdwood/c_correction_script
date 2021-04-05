/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 02:17:15 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/04/05 15:13:03 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tab[6] = {5,7,9,3,4,8};
	int count = 0;
	while(count < 6) {
		printf("%d ", tab[count]);
		count++;
	}
	printf("\n");
	count = 0;
	ft_sort_int_tab(tab, 6);
	while(count < 6) {
		printf("%d ", tab[count]);
		count++;
	}
	printf("\n");
	return (0);
}