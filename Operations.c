//
// Created by hasan on 14/10/2019.
//
#include<stdio.h>
#include<string.h>
#include "Operations.h"
// This function display menu.
void displayMenu(){
    printf("----------------------\n");
    printf("1 - Encrypt : \n");
    printf("2 - Decrypt : \n");
    printf("0 - Exit...\n ");
    printf("----------------------\n");
}
//This function is Decrypt function.
void decrypt(){
    int length = 50;//char array size .
    char cipherText[length];
    char keyword[length];
    char plainText[length];
    char newKeyword[length];//This newKeyword to create the plain text size

    printf("Enter a Ciphertext(Please enter Max 50 character and Upper case.) : \n");
    scanf("%s",cipherText);

    printf("Enter a keyword(Please enter Max 50 character and Upper case.) : \n");
    scanf("%s",keyword);

    strcpy(newKeyword,keyword);//I have synced passwords.
    //I equalized the lengths of cipher text and password.
    while(strlen(plainText)>strlen(newKeyword)){
        strcat(newKeyword,keyword);
    }
    //Create a plain text.
    for(int i = 0; i < strlen(cipherText) ; i = i+1 ){
        plainText[i] = ("%c ",(((cipherText[i]+26-newKeyword[i])%26)+65));
    }
    plainText[strlen(cipherText)] = '\0';
    printf("Cipher Text : %s \n",cipherText);
    printf("Keyword : %s \n",newKeyword);
    printf("Plain Text : %s \n",plainText);

}
//This function is Encrypt function.
void encrypt(){
    int length = 50;//char array size.
    char plainText[length];
    char keyword[length];
    char cipherText[length];
    char newKeyword[length];//This newKeyword to create the plain text size

    printf("Enter a plain text(Please enter Max 50 character and Upper case.) : \n");
    scanf("%s",plainText);

    printf("Enter a keyword(Please enter Max 50 character and Upper case.) : \n");
    scanf("%s",keyword);

    strcpy(newKeyword,keyword);//I have synced passwords.
    //I equalized the lengths of plain text and password.
    while(strlen(plainText)>strlen(newKeyword)){
        strcat(newKeyword,keyword);
    }
    //Create a cipher text.
    for(int i = 0; i < strlen(plainText) ; i = i+1 ){
        cipherText[i] = (((plainText[i]+newKeyword[i]-130)%26)+65);
    }
    cipherText[strlen(plainText)] = '\0';
    printf("Plain Text : %s \n",plainText);
    printf("Keyword : %s \n",newKeyword);
    printf("Cipher Text : %s \n",cipherText);

}