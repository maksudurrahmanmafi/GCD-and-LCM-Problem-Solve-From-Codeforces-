#include<stdio.h>
int main(){
    int day;
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("Saturday");
        break;
    case 2:
        printf("sun");
        break;
    case 3:
        printf("mon");
        break;
    case 4:
        printf("tues");
        break;
    case 5:
        printf("wed");
        break;
    case 6:
        printf("thus");
        break;
    case 7:
        printf("friday");
        break;
    case 8:
        printf("friay");
        break;
    case 9:
        printf("fridy");
        break;
    case 10:
        printf("frida");
        break;
    
    default:
        printf("Day is not Valid\n");
        break;
    }
    int i =0;
    for(int i =0;i<10;i++){
        printf("%d \n",i);
    }

    return 0;
}