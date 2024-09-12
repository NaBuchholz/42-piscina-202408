/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:33:03 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/08/24 20:22:24 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_is_valid(char *input_str);
void	ft_print_board(int board[4][4]);

int	main(int argc, char *argv[])
{
	int matriz[4][4] = {0};

	if (argc != 2){
		write(1, "Error", 6);
	}

//argc => numero de argumento em int que o programa recebeu.
//argv => array de argumentos (Um vetor de ponteiros para caracteres (char*))

	int result = ft_is_valid(argv[1]);

	if (result == 0) {
		printf("String válida.\n");
	} else {
		printf("String inválida.\n");
	}
	return (0);

	ft_print_board(matriz[4][4]);

}
