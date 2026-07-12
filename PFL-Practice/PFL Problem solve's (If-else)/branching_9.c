//branching_9_input is a character
#include<stdio.h>
#include<ctype.h>
int main(){
    char x;
    scanf("%c",&x);
    x=tolower(x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
        printf("Vowel");
    else if(x>='a'&&x<='z')
        printf("Consonant");
    else
        printf("Not Letter");

}







