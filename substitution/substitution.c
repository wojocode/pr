#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

bool only_characters(string key);
bool unique_chars(string key);
int main(int argc, string argv[])
{
//only 2 command line arg
    while (argc == 1 || argc > 2){
        printf("./substitution key\n");
        return 1;
    }
// checking cipher lenght
    while (strlen(argv[1]) != 4){
        printf("Key must contain 26 characters.\n");
        return 1;
    }
// checking if key is alphabetical
    if (!(only_characters(argv[1]))){
        printf("incorect key\n");
        return 1;
    }

    string plaintext = get_string("plaintext: ");
    for (int i = 0 , n = strlen(plaintext); i < n; i++){
        char k = plaintext[i];
        printf("%c",k);
    }
}

// checking if key is alphabetical
bool only_characters(string key){
    for (int i = 0 , n = strlen(key); i < n; i++){

        if(isalpha(key[i])){
        }
        else{
            return 0;
        }
    }
    return 1;
}
// only unic character check
bool unique_chars(string key){
    int i = 0;
    for (int fixed = 0; fixed < strlen(key); fixed++){
        for (i = 0; key[fixed] == key[i+1]; i++){
        }
    }
    return 1;
}

