/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 02:17:15 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/04/03 02:24:22 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int *********nbr_9;
	int ********nbr_8;
	int *******nbr_7;
	int ******nbr_6;
	int *****nbr_5;
	int ****nbr_4;
	int ***nbr_3;
	int **nbr_2;
	int *nbr_1;

	int nbr = 0;
	
	nbr_1 = &nbr;
	nbr_2 = &nbr_1;
	nbr_3 = &nbr_2;
	nbr_4 = &nbr_3;
	nbr_5 = &nbr_4;
	nbr_6 = &nbr_5;
	nbr_7 = &nbr_6;
	nbr_8 = &nbr_7;
	nbr_9 = &nbr_8;
	printf("%d\n", nbr);
	ft_ultimate_ft(nbr_9);
	printf("%d\n", nbr);
	return (0);
}