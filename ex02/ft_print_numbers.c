/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmampa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:47:40 by tsmampa           #+#    #+#             */
/*   Updated: 2020/07/09 15:25:31 by tsmampa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char ch)
{
	write(1, &ch, 1);
		return(0);
}

void ft_print_numbers(void)
{
	char n;
	n = '0';
	while (n <= '9')
	{
		ft_putchar(n);
		n = n + 1;
	}
}

int main(void)
{
	ft_print_numbers();
	return(0);

