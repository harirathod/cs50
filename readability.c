#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Here, L is the average number of letters per 100 words in the text.
//S is the average number of sentences per 100 words in the text.
//check whether a character is a alphabetical (isalpha), and thus add to the count of Letters. L = letters/Words * 100
//check for whitespace (isblank), and thus add to the count of words. Words = (SumNumberWhite + 1)
//check for a sentence-ending character, i.e. check for '!', '?', '.' Sentences. S = Sentences/Words * 100
//int index = 0.0588 * L - 0.296 * S - 15.8
//int x = round int index
int main(void)
{
    //Get input text from user
    string text = get_string("Text: ");
    //Count the number of letters, words, and sentences.
    int Letters = 0;
    int Words = 1;
    int Sentences = 0;
    for (int i = 0; i < strlen(text); i ++)
    {
        if isalpha(text[i])
        {
            Letters ++;
        }
        if isblank(text[i])
        {
            Words ++;
        }
        if (text[i] == '!' || text[i] == '?' || text[i] == '.')
        {
            Sentences ++;
        }
    }
    //Don't put 'return x' as it stops further statements from happening.
    //return Letters;
    //return Words;
    //return Sentences;
    //N.B. Use a calculator and test the variables in lines 40 - 42 to check how the values change, and if rounding or casting needs changing.
    float S = ((float) Sentences / (float) Words) * 100.0;
    float L = ((float) Letters / (float) Words) * 100.0;
    //The round requies requires "double", thus you cannot use "float round(float x)"
    double x = 0.0588 * L - 0.296 * S - 15.8;
    int index = round(x);
    //Compare values of index, and where suitable, print the correct statement.
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 15)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
