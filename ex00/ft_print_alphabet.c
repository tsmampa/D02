/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmampa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 13:16:33 by tsmampa           #+#    #+#             */
/*   Updated: 2020/07/09 15:47:22 by tsmampa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	ft_putchar(char ch)
{
	write(1, &ch, 1);
		return(0);
}

void ft_print_alphabet(void)
{
	char a, z, ch;
	ch = 'a';
	while (ch <= 'z')
	{
		ft_putchar(ch);
		ch++;
	}
}

int main(void)
{
	ft_print_alphabet();
	return(0);
}
