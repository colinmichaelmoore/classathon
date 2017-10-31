#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>





int fibo(num){
    //int total = 0;
    int current = 1;
    int last = 1;
    int tmp = 0;
    int answer = 2;

    do {


        tmp = current;
        current += last;
        last = tmp;
        if (current % 2 != 0 && current <= num){

            answer += current;
        }



    } while (current <= num);


    printf("\n%i\n", answer);
    return 0;
}



int main(void) {

    printf("Enter an int to get a sum of all odd fibonacci numbers up to your int: ");
    int userFibo = get_int();

    fibo(userFibo);


    return 0;
}
