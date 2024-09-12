/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 10:35:16 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/09/02 21:41:01 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		i;
	char	output[12];

	i = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb != -2147483648 && nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb == 0)
		output[i++] = '0';
	while (nb > 0)
	{
		output[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	while (i > 0)
		write(1, &output[--i], 1);
}
/*int main(void)
{
	ft_putnbr(42);
	write(1,"\n",1);

	ft_putnbr(-42);
	write(1,"\n",1);

	ft_putnbr(0);
	write(1,"\n",1);

	ft_putnbr(2147483647);
	write(1,"\n",1);

	ft_putnbr(-2147483646);
	write(1,"\n",1);

	return (0);
}*/
