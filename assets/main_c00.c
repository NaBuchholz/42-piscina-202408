#include <stdio.h>

void	ft_print_alphabet(void);
void	ft_putchar(char c);
void	ft_print_reverse_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);
void	ft_print_comb(void);

int main(){
    /******************************************C00****************************************/

    //ex00
    printf("\n-----Put Char---------------\n");
    ft_putchar('c');


    //ex01
    printf("\n----Print Alphabet----------------\n");
    ft_print_alphabet();


    //ex02
    printf("\n----Print Reverse Alphabet----------------\n");
    ft_print_reverse_alphabet();


    //ex03
    printf("\n----Print Numbers----------------\n");
    ft_print_numbers();

    //ex04
    printf("\n---- TESTANDO 0 => VALOR ABAIXO DEVE DAR P----------------\n");
    ft_is_negative(0);
    printf("\n---- TESTANDO -8 => VALOR ABAIXO DEVE DAR N ---------\n");
    ft_is_negative(-8);
    printf("\n---- TESTANDO 10 => VALOR ABAIXO DEVE DAR P ---------\n");
    ft_is_negative(10);
    //ex05
    printf("\n-----Testando Print Combo---------------\n");
    ft_print_comb();
    //ex06
    printf("\n-----Testando Print Combo2---------------\n");

    return (0);
}
