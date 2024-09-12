/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:32:55 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/09/02 22:55:09 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnumbers(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a == 55 && b == 56 && c == 57)
	{
		return ;
	}
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb(void)
{
	int	first_n;
	int	second_n;
	int	third_n;

	first_n = 48;
	while (first_n <= 55)
	{
		second_n = first_n + 1;
		while (second_n <= 56)
		{
			third_n = second_n + 1;
			while (third_n <= 57)
			{
				ft_putnumbers(first_n, second_n, third_n);
				third_n++;
			}
			second_n++;
		}
		first_n++;
	}
}
int main()
{
    ft_print_comb();
    write(1, "\n", 1);
    return (0);
}
