#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  // Include the ctype.h header for islower function

#define FILENAME "text.txt"

int main() {
    FILE *fp = NULL;
    FILE *fp1 = NULL;

    char ch = ' ';

    fp = fopen(FILENAME, "r");

    if (fp == NULL)
        return -1;

    // Create a temporary file

    fp1 = fopen("temp.txt", "w");
    if (fp1 == NULL) {
        fclose(fp);  // Close the previously opened file
        return -1;
    }

    // Reading through the file
    while ((ch = fgetc(fp)) != EOF) {  // Fixed the loop condition
        if (islower(ch)) {
            ch = ch - 32;
        }
        fputc(ch, fp1);
    }

    fclose(fp);
    fclose(fp1);

    // Rename the temp.txt file to text.txt
    if (rename("temp.txt", FILENAME) != 0) {
        perror("Error renaming file");
        return -1;
    }

    fp = fopen(FILENAME, "r");
    if (fp == NULL) {
        perror("Error opening renamed file");
        return -1;
    }

    while ((ch = fgetc(fp)) != EOF) {  // Fixed the loop condition
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
