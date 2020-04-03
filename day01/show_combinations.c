/*
** EPITECH PROJECT, 2020
** Write a function that displays, in ascending order, all numbers composed by three different digits numbers (012, 013, 014,023,....,789). Given three digits(alll diferent), only the smallest number composed by those digits must be displayed.
** File description:
** 
*/

#include <unistd.h>

void my_putchar(char c) {

    write(1, &c, 1);
}

int show_combinations(void) {

    char digit1;
    char digit2;
    char digit3;

    for(digit1 = '0'; digit1 <= '7'; digit1++){
        for(digit2 = '0'; digit2 <= '8'; digit2++){
            for(digit3 = '0'; digit3 <= '9'; digit3++){
                if(digit2 != digit1 && digit2 != digit3 && digit3 != digit1){
                    my_putchar(digit1);
                    my_putchar(digit2);
                    my_putchar(digit3);
                    my_putchar('\n');
                }
                
            }
        }
    }
    
}



int main(void) {

    show_combinations();
}
