#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    // Your implementation of the function goes here
    // This is just an example, the actual logic would depend on your requirements
    int maxLength = 0;
    for (int i = 0; i< strsSize; i++) {
        if (maxLength < strlen(strs[i])) {
            maxLength = strlen(strs[i]);
        }
    }
    printf("%d", maxLength);

    return maxLength;
}

int main() {
    char* strings[] = {"apple", "app", "ape"}; // Example array of strings
    int size = 3; // Number of strings in the array

    // Accessing the strings using strs[i]
    longestCommonPrefix(strings, size);

    return 0;
}
