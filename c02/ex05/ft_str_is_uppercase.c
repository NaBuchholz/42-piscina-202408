/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 22:21:35 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/27 19:32:09 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
    char str1[] = "HELLOWORLD";
    char str2[] = "Hello, World!";
    char str3[] = "HELLOWORLd";

    printf("String 1 is uppercase: %d\n", ft_str_is_uppercase(str1));
    printf("String 2 is uppercase: %d\n", ft_str_is_uppercase(str2));
    printf("String 3 is uppercase: %d\n", ft_str_is_uppercase(str3));

    return 0;
}*/
