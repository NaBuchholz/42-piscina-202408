/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:44:11 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/27 19:38:45 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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
    char str1[] = "12345";
    char str2[] = "123a45";

    printf("String 1 is numeric: %d\n", ft_str_is_numeric(str1));
    printf("String 2 is numeric: %d\n", ft_str_is_numeric(str2));

    return 0;
}*/
