/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 22:02:00 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/09/04 08:35:04 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_bobble_sort(char **str,int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - i)
		{
			temp = "";
			if(str[i][j] > str[i + 1][j])
			{
				temp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = temp;
				j++;
			}
			else if(str[i][j] == str[i + 1][j])
				j++;
		}
		i++;
	}
}
void	ft_putstr(char **str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
			write(1,&str[i][j++],1);
		write(1,"\0\n",2);
		i++;
	}

}
int	main(int argc,char **argv)
{
	if (argc < 2)
		return(0);
	ft_bobble_sort(argv,argc - 1);
	ft_putstr(argv);
	return (0);
}
