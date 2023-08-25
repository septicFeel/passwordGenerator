#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void generator (int n){

    srand((unsigned int)(time(NULL)));
    int random = rand() % 4; // %4 is used because there are 4 different symbols

    char password[n];
    
    char symbol[] = "!@#$^&*,.;:";
    char letters[] = "abcdefghijklmnoqprstuvwyzx";
    char capitalLetters[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    char numbers[] = "0123456789";
    
    for (int i = 0; i < n; i++){

        if ( random == 0){
            password[i] = capitalLetters[rand() % 10];
        }
        else if ( random == 1){
            password[i] = letters[rand() % 10];
        }
        else if ( random == 2){
            password[i] = numbers[rand() % 10];
        }
        else if ( random == 3){
            password[i] = symbol[rand() % 10];
        }

    random =  rand() % 4; // in order to get a random array every time
    }
    printf("your randomly generated password is: %s\n", password);
}

int main (){

    int n;
    printf("insert the number of digits wanted in the password: ");
    
    scanf("%d", &n);
    generator(n);


    return 0;

}