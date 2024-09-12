/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:24:53 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/30 02:50:32 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i ;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
int main()
{
	char source[] = "Hello, world!";
	char destination[20] = "###################";
	unsigned int n = 5;

	ft_strncpy(destination, source, n);
	printf("Original string: %s\n", source);
	printf("Copied string: %s\n", destination);

	return 0;
}*/
