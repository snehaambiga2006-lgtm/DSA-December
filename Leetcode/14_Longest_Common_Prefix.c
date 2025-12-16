#include<stdio.h>
#include<string.h>
char* longestCommonPrefix(char** strs, int strsSize) {
    if(strsSize==0){
        return "";
    }
    int minlength=strlen(strs[0]);
    for(int i=1; i<strsSize;i++){
        int len=strlen(strs[i]);
        if(len<minlength){
            minlength=len;
        }
    }
    for(int i=0; i<minlength;i++){
        char currentChar=strs[0][i];
        for(int j=1;j<strsSize;j++){
            if(strs[j][i]!=currentChar){
                strs[0][i]='\0';
                return strs[0];
            }
        }
    }
    strs[0][minlength]='\0';
    return strs[0];
}
