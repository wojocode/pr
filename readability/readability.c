#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);

int main(void)
{
    string text = get_string("type in text: ");

    printf("%s\n" ,text);

     int letters = count_letters(text);
     printf("letters: %i\n", letters);

    int words = count_words(text);
    printf("words: %i\n", words);

}
//letter counter
int count_letters(string text){

    int letter = 0;

    for (int i = 0, n = strlen(text); i <= n; i++)
    {

        if (isalpha(text[i]))
        {
            letter++;
        }
    }
    return letter;

}
// word counter
int count_words(string text){

    int word = 0;





        for (int i = 0 , n = strlen(text); i <= n; i ++)
        {
            if (text[i] == 32)
            {
            word++;
            }
        }

            return word + 1;


}