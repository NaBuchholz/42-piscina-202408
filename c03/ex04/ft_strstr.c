/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:44:04 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/30 03:41:16 by nbuchhol         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr_s;
	int		i;
	int		j;

	j = ft_strlen(to_find);
	ptr_s = (void*)0;
	i = 0;
	while (str[i])
	{
		while (str[i] == *to_find)
		{
			if (ft_strlen(to_find) == j && to_find)
			{
				ptr_s = &str[i];
			}
			i++;
			to_find++;
		}
		i++;
	}
	return (ptr_s);
}
/*#include <stdio.h>
int main()
{
	char str[] = "Hello, worldjkbkjbkjb!";
	char to_find[] = "";
	char *result;

	result = ft_strstr(str, to_find);

		printf("Substring found: %p\n", result);

	return 0;
}*/
