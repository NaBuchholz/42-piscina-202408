/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:18:34 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/20 15:11:38 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	letter;

	if (n >= 0)
	{
		letter = 'P';
		write(1, &letter, 1);
	}
	else
	{
		letter = 'N';
		write(1, &letter, 1);
	}
}
