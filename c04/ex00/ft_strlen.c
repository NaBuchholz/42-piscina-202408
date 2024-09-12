/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:00:50 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/31 10:31:25 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int main() {
    char str1[] = "Ola, mundo!";
    char str2[] = "";  // String vazia
    char str3[] = "Um caractere";

    printf("O comprimento de \"%s\" é: %d\n", str1, ft_strlen(str1));
    printf("O comprimento de \"%s\" é: %d\n", str2, ft_strlen(str2));
    printf("O comprimento de \"%s\" é: %d\n", str3, ft_strlen(str3));

    return 0;
}*/
