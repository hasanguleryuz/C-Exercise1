#include <stdio.h>
#include "Operations.h"

int main(){

    int selection;//operations selection.
    while(1){//while(true)
        displayMenu();
        scanf("%d",&selection);
        if(selection == 1){//If enter '1' encrypt.
            encrypt();
        }
        else if(selection == 2){//If enter '2' decrypt.
            decrypt();
        }
        else if(selection == 0){//If enter '0' quit.
            break;
        }
        else{
            printf("Try again. You must enter 1,2,0.\n");
        }

    }

}
