/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:49:04 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/27 20:02:32 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}
/*#include <stdio.h>
int main()
{
    int x = 42;
    int y = 21;

    printf("Antes da troca: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}*/
