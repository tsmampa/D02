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
