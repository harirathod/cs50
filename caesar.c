#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//c[i] = (p[i] + k) % 26
//c[i] position of the isalpha() letter in the cipher text.
//p[i] is the position of the isalpha() letter in the plaintext.
//k is the value of the key.
//Include "return 0/1;" at the end of loops but within the loop to cut them. Also use voit exit(int status) to stop further programs being initialized.
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
        void exit(int status);
    }
    string k = argv[1];
    //Initialize the variable outside of the for loop.
    int NonDigitCount = 0;
    for (int i = 0; i < strlen(k); i ++)
    {
        //Check how many non digits there are.
        if (isdigit(k[i]) == false)
        {
            NonDigitCount ++;
        }
    }
    if (NonDigitCount > 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
        //Use void exit(int status) to cut the program so further programs aren't initialized, so for loops don't have to be in 'if' statements.
        void exit(int status);
    }
    //Convert the key into an integer.
    int l = atoi(k);
    string plain = get_string("plaintext: ");
    printf("ciphertext: ");
    int j;
    int x = 0;
    int y = 0;
    for (j = 0; j < strlen(plain); j ++)
    {
        if (islower(plain[j]))
        {
            plain[j] = (((plain[j] - 97 + l) % 26) + 97);
            printf("%c", plain[j]);
        }
        else if (isupper(plain[j]))
        {
            plain[j] = (((plain[j] - 65 + l) % 26) + 65);
            printf("%c", plain[j]);
        }
        else
        {
            printf("%c", plain[j]);
        }
    }
    printf("\n");
}
