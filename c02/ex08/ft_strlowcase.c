/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 00:49:43 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/27 19:16:33 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32 ;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}
/* #include <stdio.h>
int	main() {
    char	str[] = "Hello, WORld!";
    printf("Original string: %s\n", str);
    ft_strlowcase(str);
    printf("Lowercase string: %s\n", str);
    return 0;
}*/
