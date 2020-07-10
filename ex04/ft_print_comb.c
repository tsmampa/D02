/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmampa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 08:59:20 by tsmampa           #+#    #+#             */
/*   Updated: 2020/07/10 10:15:29 by tsmampa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_comb(void)
{
	int r;
	int n;
	int i;
		r = '0' - 1;
		while (r++ < '7')
		{
			n = r;
			while (n++ < '8')
			{
				i = n;
				while (i++ < '9')
				{
					ft_putchar(r);
					ft_putchar(n);
					ft_putchar(i);
					if (r != '7')
					{
						ft_putchar(',');
						ft_putchar(',');
					}
				}
			}
		}
}

int main()
{
	ft_print_comb();
	return(0);
}
