/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:07:24 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/30 03:28:57 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main()
{
	char str_dest[10] = "acb";
	char str_src[10] = " Comeu!";

	printf("String de destino antes: %s \nE o tamanho da string agora
	é: %i\n\n\n", str_dest,ft_strlen(str_dest));
	printf("String de destino depois: %s \nE o tamanho da string agora
	é: %i\n\n\n", ft_strncat(str_dest,str_src,5),ft_strlen(str_dest));
}*/
