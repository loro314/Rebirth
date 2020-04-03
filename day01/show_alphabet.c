/*
** EPITECH PROJECT, 2020
** Write a function that, beginning with a, displays the lowercase alphabet in ascending order, on a single line.
** File description:
** 
*/
#include <unistd.h>
#include <stdio.h>

void my_putchar(char c) {

    write(1, &c, 1);  /*input to adress c*/
}


int print_alphabet(void) {

    int i;

    for(i = 97; i < 121; i++) {

        my_putchar(i);
    }
}

char show_combinations(void) {

    char digit1;
    char digit2;
    char digit3;

    for(digit1 = '0'; digit1 <= '7'; digit1++){

        
        for(digit2 = '0'; digit2 <= '8'; digit2++){
            for(digit3 = '0'; digit3 <= '9'; digit3++){
                if(digit2 != digit1 && digit3 != digit2 && digit1 != digit3){
                    my_putchar(digit1);
                    my_putchar(digit2);
                    my_putchar(digit3);
                    my_putchar('\n');
                }
            }
        }
    }
}

int f(int x) {

    int square;

    square = x * x;
    return (square);
}



int main(void) {

    int returned_value;
    int value = 5;
    char print;
    
    print = 'h';
    returned_value = f(value);
    printf("%d \n",returned_value);
    printf("%d \n", f(value));  /* print directly the returned value calling the function */
    my_putchar(print);
    my_putchar('\n');
    print_alphabet();
    show_combinations();
    return (0);
}
