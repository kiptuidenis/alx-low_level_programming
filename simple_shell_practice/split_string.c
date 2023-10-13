#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** splitString(const char* str, int* numWords) {
    char **words;
    char *word;
    int i;
    int strLen = strlen(str);

    /* Count the number of words */
    *numWords = 1; /*Initialize to 1 for the last word*/
    for (i = 0; i < strLen; i++) {
        if (str[i] == ' ') {
            (*numWords)++;
        }
    }

    words = malloc((*numWords) * sizeof(char*));
    if (words == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    /* Split the string and store each word in the array */
    word = strtok(strdup(str), " "); /* Duplicate the string to avoid modifying the original */
    i = 0;
    while (word != NULL) {
        words[i] = malloc((strlen(word) + 1) * sizeof(char));
        if (words[i] == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            exit(1);
        }
        strcpy(words[i], word);
        word = strtok(NULL, " ");
        i++;
    }

    return words;
}

int main() {
    const char* input = "Hello world! This is a test";
    int numWords;
    char** words = splitString(input, &numWords);
    int i;

    for (i = 0; i < numWords; i++) {
        printf("%s\n", words[i]);
        free(words[i]);
    }
    free(words);

    return 0;
}

