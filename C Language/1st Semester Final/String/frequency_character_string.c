#include <stdio.h>
#include <string.h>
int main(){
    char s[200];
    int freq[256]={0};
    fgets(s,200,stdin);
    for(int i=0;s[i]!='\0';i++){
        freq[s[i]]++;
    }
    for(int i=0;i<256;i++){
        if(freq[i]>0 && i!='\n'){
            printf("%c = %d\n", i, freq[i]);
        }
    }
    return 0;
}