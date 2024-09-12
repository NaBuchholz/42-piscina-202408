/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 22:13:18 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/27 19:35:02 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
    char str1[] = "helloworld";
    char str2[] = "Hello, World!";

    printf("String 1 is lowercase: %d\n", ft_str_is_lowercase(str1));
    printf("String 2 is lowercase: %d\n", ft_str_is_lowercase(str2));

    return 0;
}*/
