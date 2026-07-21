//branching_7
#include<stdio.h>

int main(){
    char x;
    scanf("%c",&x);
    if(x>='A'&&x<='Z')
        printf("Uppercase Alphabet");
    else if(x>='a'&&x<='z')
        printf("Lowercase Alphabet");
    else
        printf("Not Alphabet");
}





