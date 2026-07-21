//branching_6
#include<stdio.h>
#include<ctype.h>

int main(){
    char x;
    scanf("%c",&x);
    x=toupper(x);
    if(x>='A'&&x<='Z')
        printf("Alphabet");
    else
        printf("Not Alphabet");


}




