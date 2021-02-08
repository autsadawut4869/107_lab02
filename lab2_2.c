#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,c,k=0;
    char A,B,C;
    scanf("%d%d%d",&a,&b,&c);
    scanf("%c%c%c",&A,&B,&C);

    if(a<b&&a<c)
    {
        A=a;
        if(b<c)
            B=b;
        else if(b>c){
            B=c;
            k=1;
        }
        if(k==1)
            C=b;
        else
            C=c;
    }


    return 0;
}
