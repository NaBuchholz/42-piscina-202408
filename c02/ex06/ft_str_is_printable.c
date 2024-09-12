/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 22:27:35 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/27 19:24:34 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
/*#include <stdio.h>
int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!\n";
    char str3[] = "Hello, World!\t";

    printf("String 1 is printable: %d\n", ft_str_is_printable(str1));
    printf("String 2 is printable: %d\n", ft_str_is_printable(str2));
    printf("String 3 is printable: %d\n", ft_str_is_printable(str3));

    return 0;
}*/
