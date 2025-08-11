#include <stdio.h>

int main(){
    char specialCharacters[] = {'@', '#', '$', '%'};

    for (int i = 0; i < 4; i++){
        printf("Special character %d: %c\n", i+1, specialCharacters[i]);
    }
}