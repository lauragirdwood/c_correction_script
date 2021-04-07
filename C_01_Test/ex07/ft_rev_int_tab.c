/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 02:14:59 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/04/06 14:26:43 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int increment;
	int decrement;
	int aux;

	increment = 0;
	decrement = size - 1;
	while (increment < decrement)
	{
		aux = tab[increment];
		tab[increment] = tab[decrement];
		tab[decrement] = aux;
		decrement--;
		increment++;
	}
}
