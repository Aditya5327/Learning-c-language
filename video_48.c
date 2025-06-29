#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceWord(const char *string, const char *oldWord, const char *newWord)
{
    char *result;
    int i, count = 0;
    int newWordLen = strlen(newWord), oldWordLen = strlen(oldWord);

    for (i = 0; string[i] != '\0';)
    {
        if (strstr(&string[i], oldWord) == &string[i])
        {
            count++;
            i += oldWordLen;
        }
        else
        {
            i++;
        }
    }

    result = (char *)malloc(strlen(string) + count * (newWordLen - oldWordLen) + 1);

    char *ptr = result;
    while (*string)
    {
        if (strstr(string, oldWord) == string)
        {
            strcpy(ptr, newWord);
            ptr += newWordLen;
            string += oldWordLen;
        }
        else
        {
            *(ptr++) = *(string++);
        }
    }
    *ptr = '\0';

    return result;
}

int main()
{
    FILE *ptr1 = NULL, *ptr2 = NULL;
    ptr1 = fopen("video_48_1.txt", "r");
    ptr2 = fopen("video_48_2.txt", "a");

    char str[200], name[50], item[50], outlet[100];
    fgets(str, 200, ptr1);
    printf("%s\n", str);

    printf("Input name : ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Input item : ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("Input outlet : ");
    fgets(outlet, sizeof(outlet), stdin);
    outlet[strlen(outlet) - 1] = '\0';

    char *afterName = replaceWord(str, "{{name}}", name);
    char *afterItem = replaceWord(afterName, "{{item}}", item);
    char *final = replaceWord(afterItem, "{{outlet}}", outlet);

    fprintf(ptr2, "%s\n", final);
    printf("%s\n", final);

    free(afterName);
    free(afterItem);
    free(final);

    return 0;
}