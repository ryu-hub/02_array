#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    str[0]=6;
    str[1]=9;
    str[2]=-2;
    str[3]=5;
    str[4]=-3;
    
    while(fgets(str, sizeof(str), stdin)){
        printf("%s", str);
    }

    return 0;
}
