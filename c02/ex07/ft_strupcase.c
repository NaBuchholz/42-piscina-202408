/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 23:31:23 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/27 19:22:31 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32 ;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}
/*#include <stdio.h>
int main() {
    char str[] = "hello, world!";
    printf("Original string: %s\n", str);
    ft_strupcase(str);
    printf("Uppercase string: %s\n", str);
    return 0;
}*/
