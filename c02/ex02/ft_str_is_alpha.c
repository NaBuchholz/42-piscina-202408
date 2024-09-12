/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:44:11 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/27 19:42:00 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
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
    char str1[] = "HelloWorld";
    char str3[] = "Hello, World!123";

    printf("String 1 is alphabetic: %d\n", ft_str_is_alpha(str1));
    printf("String 3 is alphabetic: %d\n", ft_str_is_alpha(str3));

    return 0;
}*/
