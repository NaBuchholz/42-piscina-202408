/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 01:21:19 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/30 02:59:52 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || !is_alphanumeric(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int main()
{
	char texto[69] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("\n------ Ex09 ft_strcapitalize----------\n");
	printf("String capitalizada : %s\n",
	ft_strcapitalize(texto));
	printf("Para vazio deve retornar vazio : %s\n", ft_strcapitalize(""));
}*/
