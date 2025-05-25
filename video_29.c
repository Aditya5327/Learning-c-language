#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int in = 0;    // to check whether we are inside the tag or not.
    int index = 0; // to make the same string start from the index 0 or shifting the string.
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue; // after finding that we are inside tag we use continue that will go on next iteration b/c we don't the content inside tag.
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue; // after finding that we are outside tag we use continue that will go on next iteration b/c we want content from next iteration we don't want '>' in our answer.
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0'; // for ending the string we do this.

    // now will remove trailing spaces from the beginning.
    while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }

    // now will remove trailing spaces from the end.
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    int n;
    char tag[] = "<h1>     This is a tag.   </h1>";
    parser(tag);
    printf("The parsed string is ~~%s~~", tag);
    return 0;
}