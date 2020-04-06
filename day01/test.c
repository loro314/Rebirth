#include <stdio.h>
int my_digit_count(int n)
{
    int result = 0;
    int begin = 1;
    
    while (begin == 1 || n != 0) {
        begin = 0;
        n = n / 10;
        result = result + 1;
    }
    printf("%d", result);
    return (result);
}

int main( int argc, char** argv){

    my_digit_count(-200);
}
