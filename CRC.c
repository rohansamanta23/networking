#include <stdio.h>
#include <string.h>
int main(){
    int msgSize,keySize;
    char MSG[100],key[30],key2[30],temp[30],str[50],rem[50];
    printf("Enter the message:");
    scanf("%s",MSG);
    printf("Enter the key:");
    scanf("%s",key);
    strcpy(key2,key);
    msgSize = strlen(MSG);
    keySize = strlen(key);
    for(int i=0;i<strlen(key)-1;i++){
        MSG[msgSize+i] = '0';
    }
    for (int i = 0; i < keySize; i++){
        temp[i] = MSG[i];
    }
    for(int i=0;i<msgSize;i++){
        str[i] = temp[0];
        if(str[i]=='0'){
            for (int j = 0; j < keySize; j++){
                key[j] = '0';
            }
        }else{
            for (int j = 0; j < keySize; j++){
                key[j] = key2[i];
            }
        }
        for(int j = keySize-1; j > 0; j--){
            if(temp[j]==key[j]){
                rem[j-1] = '0';
            }else{
                rem[j-1] = '1';
            }
        }
        rem[keySize-1] = MSG[keySize+i];
        strcpy(temp,rem);
        puts(temp);
    }

}
