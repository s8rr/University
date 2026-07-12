//branching_8
#include<stdio.h>
#include<ctype.h>
int main(){
    char x;
    scanf("%c",&x);
    x=tolower(x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
        printf("Vowel");
    else
        printf("Not Vowel");

}






