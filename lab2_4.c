#include <stdio.h>
#include <string.h>
int main()
{
    long long int input,a[]={0},x,c=0,y;
    int i;
    char s[30]={'\0'};
    scanf("%lld", &input);
    sprintf(s, "%lld",input);
    fflush(stdin);
    y=strlen(s);
    for(i=y;i>0;i--){
        a[i]=input%10;
        printf("%d ",a[i]);
        input=input/10;

    }
 /*   for(i=0;i<k;i++){
        if(a[i]==0){
            printf("Zero");
            if(a[i+1]!= '\0')
                printf("-");
        }
        else if(a[i]==1){
            printf("One");
            if(a[i+1]!= '\0')
                printf("-");
        }
        else if(a[i]==2){
            printf("Two");
            if(a[i+1]!= '\0')
                printf("-");
        }
        else if(a[i]==3){
            printf("Three");
            if(a[i+1]!= '\0')
                printf("-");
        }
        else if(a[i]==4){
            printf("Four");
            if(a[i+1]!= '\0')
                printf("-");
        }
        else if(a[i]==5){
            printf("Five");
            if(a[i+1]!= '\0')
                printf("-");
        }
        else if(a[i]==6){
            printf("Six");
            if(a[i+1]!= '\0')
                printf("-");
        }
        else if(a[i]==7){
            printf("Seven");
            if(a[i+1]!= '\0')
                printf("-");
        }
        else if(a[i]==8){
            printf("Eight");
            if(a[i+1]!= '\0')
                printf("-");
        }
        else if(a[i]==9){
            printf("Nine");
            if(a[i+1]!= '\0')
                printf("-");
        }
    }

*/


    return 0;
}
