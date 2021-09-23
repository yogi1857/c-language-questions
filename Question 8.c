//
#include <stdio.h>

int main()
{
    int code;
    printf("please enter the code");
scanf("%d",&code);
switch(code){
        case 1:
        printf("Red");
        break;
        case 2:
        printf("Green");
        break;
        case 3:
        printf("White");
        break;
        case 4:
        printf("Yellow");
        break;
        case 5:
        printf("Orange");
        break;
        default:
        printf("invalid input");
        break;
}

    return 0;
}
