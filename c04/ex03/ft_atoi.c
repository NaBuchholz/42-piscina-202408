/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:52:29 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/09/01 14:27:51 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i ;
	int	s;
	int	nb;

	i = 0;
	s = 1;
	nb = 0;
	while (str[i] <= 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			s *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i] - 48;
		i++;
	}
	return (nb * s);
}
/*#include <stdio.h>
int	main(void)
{
	printf("Test 1: \"123\" -> %d\n", ft_atoi("123"));
	printf("Test 2: \"   -42\" -> %d\n", ft_atoi("   -42"));
	printf("Test 3: \"+2147483647\" -> %d\n", ft_atoi("+2147483647"));
	printf("Test 4: \"-2147483648\" -> %d\n", ft_atoi("-2147483648"));
	printf("Test 5: \"  0032\" -> %d\n", ft_atoi("  0032"));
	printf("Test 6: \"-+-12\" -> %d\n", ft_atoi("-+-12"));
	printf("Test 7: \"0\" -> %d\n", ft_atoi("0"));
	return (0);
}*/
