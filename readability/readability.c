#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("type in text: ");

     int letters = count_letters(text);
     printf("letters: %i\n", letters);

    int words = count_words(text);
    printf("words: %i\n", words);

    int sentenses = count_sentences(text);
    printf("sentenses: %i\n", sentenses);

//Coleman-Liau index variables
    double L = (letters/words) *100;
    printf("L: %f", L);
    double S = (sentenses/words) *100;
    printf("S: %f", S);
// Coleman-Liau algorithm
    double index = ((0.0588 * L) - (0.296 * S)) - 15.8;
    printf("index: %f\n", index);
}
//letters counter
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
// words counter
int count_words(string text){

    int word = 0;

// word assume
    if(text[0] != '\0' && text[0] != 32)

    {
        for (int i = 0 , n = strlen(text); i <= n; i++)
        {
            if (text[i] == 32)
            {
            word++;
            }
        }
        return word + 1;
    }
    else
    {
    return 0;
    }
}

// sentences counter
int count_sentences(string text){

    int sentens = 0;

    for (int i = 0 , n = strlen(text); i <= n; i++)
    {
         if (text[i] == 46 || text[i] == 63 || text[i] == 33)
         {
            sentens++;
         }
    }
     return sentens;
}
