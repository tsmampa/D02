/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmampa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 08:31:18 by tsmampa           #+#    #+#             */
/*   Updated: 2020/07/10 08:31:32 by tsmampa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char ch)
{
	write(1, &ch, 1);
	return(0);
}

void ft_is_negative(int n)
{
	if (n<=0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}

int main()
{
	ft_is_negative(-1);
	return(0);
}
