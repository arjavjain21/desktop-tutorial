#include<stdio.h>
#include<string.h>

char c[100];
void revString(char c[],int start,int end)
{
    char temp;
    if(start>=end)
    return; //base condition
    else
    {
        temp=c[start];
        c[start]=c[end];
        c[end]=temp;
        revString(c,start+1,end-1); //calling function recursively
    }
}
void main()
{
    int start=0,end;
    printf("Input String\n");
    fgets(c,100,stdin);
    puts(c);
    end=strlen(c)-2;
    revString(c,start,end);
    printf("%s",c); //prints inverted string
}
