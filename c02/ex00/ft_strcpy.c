/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:40:32 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/24 21:26:29 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i ;

	i = 0;
	while (src[i] != '\0' )
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main(void)
{
	//Incluir a lib std.io
	char *str_to_cpy;
	char *str_dest;

	char a[7] = "Cadete";
	char b[10] = "";

	str_to_cpy = a;
	str_dest = b;


	printf("\nAntes da Copia - %s \n", str_dest);
	ft_strcpy(str_dest, str_to_cpy);
	printf("Depois da copia - %s \n----------------------------\n", str_dest);
}*/
