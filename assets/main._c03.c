#include <sndio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{

	char *str0 = "Ecole";
	char *str1 = "Ecole";
	char *str2 = "Eca";


	printf("\n------ Ex00 ft_strcmp ---------------\n");
	printf("Para igual deve retornar 0 : %i\n", ft_strcmp(str0,str1));
	printf("Para menor deve retornar -1 : %i\n", ft_strcmp("COmOpOD-+.UM"));
	printf("Para maior deve retornar 1 : %i\n", ft_strcmp("\n\a"));
}
