#include <stdio.h>

void copy(char *psource, char *ptarget, unsigned num_char)
{
    unsigned i = 0;
    while (i < num_char && psource[i] != '\0') {
        ptarget[i] = psource[i];
        i++;
    }
    // Null-terminate if there's remaining space within num_char
    if (i < num_char) {
        ptarget[i] = '\0';
    }
}

void concatenate(char *psrc1, char *psrc2, char *ptarget, unsigned buffer_size)
{
    if (buffer_size == 0) return;

    unsigned idx = 0;
    unsigned i = 0;

    // Copy characters from the first string
    while (psrc1[i] != '\0' && idx < buffer_size - 1) {
        ptarget[idx++] = psrc1[i++];
    }

    // Copy characters from the second string
    i = 0;
    while (psrc2[i] != '\0' && idx < buffer_size - 1) {
        ptarget[idx++] = psrc2[i++];
    }

    // Always ensure the final string is null-terminated
    ptarget[idx] = '\0';
}

// DO NOT change the code below
#ifndef ___TEST___
int main(void)
{
    char buffer[100];
    char *source = "This is the first sentence.  ";
    char *target = "This is the second sentence.";

    concatenate(source, target, buffer, 70);

    printf("%s", buffer);
    return 0;
}
#endif
// DO NOT change the code above