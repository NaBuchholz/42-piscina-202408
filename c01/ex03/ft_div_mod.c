/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:24:29 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/27 20:04:01 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>
int main()
{
    int dividend = 15;
    int divisor = 4;
    int result_div, result_mod;

    ft_div_mod(dividend, divisor, &result_div, &result_mod);

    printf("Divisão: %d\n", result_div);
    printf("Módulo: %d\n", result_mod);

    return 0;
}*/
