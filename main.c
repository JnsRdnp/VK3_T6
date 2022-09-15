#include <stdio.h>

int main()
{
    int userInput;
    do{
        printf("1. Nelion kehan pituus\n2.Ympyran kehan pituus\n"
               "9. Lopetus\n\n");
        scanf("%d",&userInput);
        printf("\n");

        switch(userInput){
        case 1:{
            printf("Valitsit Nelion kehan pituus\n\n");
            break;
        }
        case 2:{
            printf("Valitsit ympyran kehan pituus\n\n");
            break;
        }
        default:{
            break;
        }
        }


    }while (userInput!=9);


    return 0;
}
