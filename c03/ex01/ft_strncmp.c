/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 22:12:58 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/30 03:36:28 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				result_compare;
	unsigned int	i;

	result_compare = 0;
	i = 0;
	while ((s1[i] || s2[i]) && i < n)
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
int main()
{
    char str1[] = "hello";
    char str2[] = "hello world";
    char str3[] = "hexl";

    int result1 = ft_strncmp(str1, str2, 5);
    int result2 = ft_strncmp(str1, str3, 4);
    int result3 = ft_strncmp(str2, str3, 2);

    printf("ft_strncmp(str1, str2, 5) = %d\n", result1);
    printf("ft_strncmp(str1, str3, 4) = %d\n", result2);
    printf("ft_strncmp(str2, str3, 4) = %d\n", result3);

    return 0;
}*/
