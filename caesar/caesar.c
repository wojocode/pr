#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

bool only_digits(string argv);

int main(int argc, string argv[]){

    while(argc == 2){
        if (only_digits(argv[1])){
            return 0;
        }
        else {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        }
        if (argc != 2){
        printf("Usage: ./caesar key\n");
        return 1;
        }

    //convert string command line argv to int
    int key = atoi(argv[1]);
    //ask for string
    string plaintext = get_string("plaintext: ");
    printf("%i\n",key);
}


// checking wheather argv contains digits
bool only_digits(string argv){

    for (int i = 0, n = strlen(argv); i < n; i++){

        if (isdigit(argv[i])){
        }
        else{
            return 0;
        }
    }
    return 1;
}