/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:50:22 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/27 18:02:09 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    printf("Antes de chamar ft_ultimate_div_mod:\n");
    printf("a = %d, b = %d\n", a, b);

    ft_ultimate_div_mod(&a, &b); // Passando os endereços de a e b

    printf("Depois de chamar ft_ultimate_div_mod:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}*/
