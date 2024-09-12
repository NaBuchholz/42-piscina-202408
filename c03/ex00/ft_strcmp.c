/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:33:27 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/28 22:10:05 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result_compare;

	result_compare = 0;
	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			result_compare = s1[i] - s2[i];
			break ;
		}
		else
		{
			result_compare = 0;
		}
		i++;
	}
	return (result_compare);
}
/*#include <stdio.h>
int main() {
    char str1[] = "hello";
    char str2[] = "horld";
    char str3[] = "hello";

    int result1 = ft_strcmp(str1, str2);
    int result2 = ft_strcmp(str1, str3);

    printf("Comparison of \"%s\" and \"%s\": %d\n", str1, str2, result1);
    printf("Comparison of \"%s\" and \"%s\": %d\n", str1, str3, result2);

    return 0;
}*/
