/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:05:19 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/04/05 15:05:20 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr(int nb);

int main()
{
	ft_putnbr(-2147483648);
	ft_putnbr(-2147483647);
	ft_putnbr(0);
	ft_putnbr(2147483647);
	ft_putnbr(42);
}