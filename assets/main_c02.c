#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int	ft_str_is_alpha(char *str);
int	ft_str_is_numeric(char *str);
int	ft_str_is_lowercase(char *str);
int	ft_str_is_uppercase(char *str);
int	ft_str_is_printable(char *str);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);



int	main(void){

	/******************************************C02*****************************/

	//ex00
	printf("\n------ Ex00 ft_strcpy ----------------\n");

	char *str_to_cpy;
	char *str_dest;

	char a[7] = "Cadete";
	char b[10] = "coração";
	char texto[25] = "como 67oi to-uer so pode";


	str_to_cpy = a;
	str_dest = b;


	printf("\nAntes da Copia - %s \n", str_dest);
	ft_strcpy(str_dest, str_to_cpy);
	printf("Depois da copia - %s \n", str_dest);

	//ex01
	char c[5] = "olA!";
	char d[11] = "Vida longa";


	char *str_to_cpy_1;
	char *str_dest_1;

	str_to_cpy_1 = c;
	str_dest_1 = d;

	printf("\n------ Ex01 ft_strncpy ---------------\n");
	printf("\nAntes da copia - %s \n", str_dest_1);
	ft_strncpy(str_dest_1, str_to_cpy_1,11);
	printf("Depois da copia - %s \n", str_dest_1);

	printf("\n------ Ex02 ft_str_is_alpha ----------\n");
	printf("\nPara não alpha deve retornar 0 : %i\n", ft_str_is_alpha("Como#%*"));
	printf("Para vazio deve retornar 1 : %i\n", ft_str_is_alpha(""));
	printf("Para só alpha deve retornar 1 : %i\n", ft_str_is_alpha("ComoPodeUmPeixeVivo"));

	printf("\n------ Ex03 ft_str_is_numeric ----------\n");
	printf("\nPara vazio deve retornar 1 : %i \n", ft_str_is_numeric(""));
	printf("Para numeric deve retornar 1 : %i \n", ft_str_is_numeric("45269"));
	printf("Para outro deve retornar 0 : %i\n", ft_str_is_numeric("69Co#%*69"));

	printf("\n------ Ex04 ft_str_is_lowercase----------\n");
	printf("Para vazio deve retornar 1 : %i\n", ft_str_is_lowercase(""));
	printf("Para só lower deve retornar 1 : %i\n", ft_str_is_lowercase("comopodevo"));
	printf("Para outros deve retornar 0 : %i\n", ft_str_is_lowercase("ComoPo*-+PeixeVivo"));

	printf("\n------ Ex05 ft_str_is_uppercase----------\n");
	printf("Para vazio deve retornar 1 : %i\n", ft_str_is_uppercase(""));
	printf("Para só upper deve retornar 1 : %i\n", ft_str_is_uppercase("COMOPODEUM"));
	printf("Para outros deve retornar 0 : %i\n", ft_str_is_uppercase("ComoPo*-+PeixeVivo"));

	printf("\n------ Ex06 ft_str_is_printable----------\n");
	printf("Para vazio deve retornar 1 : %i\n", ft_str_is_printable(""));
	printf("Para só printable deve retornar 1 : %i\n", ft_str_is_printable("COmOpOD-+.UM"));
	printf("Para outros deve retornar 0 : %i\n", ft_str_is_printable("\n\a"));

	printf("\n------ Ex07 ft_strupcase----------\n");
	printf("Para só upcase deve retornar a string : %s\n", ft_strupcase(str_to_cpy_1));
	printf("Para vazio deve retornar vazio : %s\n", ft_strupcase(""));

	printf("\n------ Ex08 ft_strlowcase----------\n");
	printf("Para lowcase deve retornar a string : %s\n", ft_strlowcase(str_to_cpy_1));
	printf("Para vazio deve retornar vazio : %s\n", ft_strlowcase(""));

	printf("\n------ Ex09 ft_strcapitalize----------\n");

	printf("Para capitalize deve retornar a string : %s\n", ft_strcapitalize(texto));
	printf("Para vazio deve retornar vazio : %s\n", ft_strcapitalize(""));

	printf("\n------ Ex10 ft_strlcpy----------------\n");
	
	return (0);
}
