#include <stdio.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);

int main(){

/******************************************C01****************************************/
	//ex00
	printf("\n------ Ex00 ft_ft --------------\n");
	int na = 5;
	printf("%i Antes \n", na);
	ft_ft(&na);
	printf("%i Depois - Precisa ser 42", na);


	printf("\n------Ex01 ft_ultimate_ft com 5 -----------\n");

	//ex01
	int number;

	number = 5;

	int *ptr1 = &number;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;

	ft_ultimate_ft(&ptr8);

	//ex02
	printf("\n------Ex02 ft_swap com 9 e 2-------------\n");

	int number_one;
	int number_two;

	number_one = 9;
	number_two = 2;

	printf("\nAntes\nNumber One - %d\nNumber Two - %d\n",number_one,number_two);
	ft_swap(&number_one, &number_two);
	printf("\nDepois\nNumber One - %d\nNumber Two - %d\n", number_one,number_two);

	//ex03pont01
	int *pont00 ;
	int *pont01 ;

	int n1;
	int n2;

	n1 = 5;
	n2 = 2;

	pont00 = &n1;
	pont01 = &n2;

	//printf("\n--------EX 03 - Div Mod com 5 e 2------------\n");
	//ft_div_mod(n1,n2,pont00,pont01);
	//printf("\nDIVISÃO - %d\nMODULO - %d\n", *pont00,*pont01);

	//ex04
	printf("\n--------EX 04 - Ultimate Div Mod com 5 e 2------------\n");
	ft_ultimate_div_mod(pont00, pont01);
	printf("\nDIVISÃO - %d\nMODULO - %d\n", *pont00,*pont01);

	return (0);



}
