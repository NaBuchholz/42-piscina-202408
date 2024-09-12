/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:06:46 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/18 18:22:03 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar (char c);

void	rush(int x, int y)
{
		int	line, collum;

    if(x <= 0 || y <= 0 )
    {
        return ;
    }
	
    line = 0;

    while( line < x ){
        collum = 0 ;
        while( collum < y){
            if (line == 0 && collum == 0)
            {
                ft_putchar('/');
            } else if(line == x - 1 && collum == y - 1 && line > x && collum > y )
			{
				ft_putchar('/');
			}else if( (line == 0 && collum == y - 1) || (collum == 0 && line == x - 1))
			{
                ft_putchar('\\');
            }else if( collum == 0 || collum == y - 1 || line == 0 || line == x -1)
			{
				ft_putchar('*');
			}else{ 
                ft_putchar (' ');
            }
            collum++;
        }
        ft_putchar('\n');
        line++;
    }
}
