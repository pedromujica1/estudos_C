#include <stdio.h>
#include <string.h>

int main(){
    char minhaStr[6] = "Hello!";
    printf("String normal: ");

    puts(minhaStr);
    printf("String invertida: ");
    for (int i = 6; i > 0; i--)
    {
        printf("%c",minhaStr[i]);
    }
    printf("\n");
    return 0;

    
}