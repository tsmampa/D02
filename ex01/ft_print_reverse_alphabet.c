/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmampa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 13:45:23 by tsmampa           #+#    #+#             */
/*   Updated: 2020/07/09 14:38:14 by tsmampa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int ft_putchar(char ch)
{
	write(1, &ch, 1);
		return(0);
}

void ft_print_reverse_alphabet(void)
{
	char a, z, ch;
	ch = 'z';
	while (ch >= 'a')
	{
		ft_putchar(ch);
		ch--;
	}
}

int main(void)
{
	ft_print_reverse_alphabet();
		return(0);
}
