#include<stdio.h>

int main()

{

    int a,b,i;

    printf("enter a two number:");
    scanf("%d %d",&a,&b);

    do
    {
        


        printf("enter a oprations:(+,-,*,/)");
        scanf("%d",&i);



      


        switch (i)

        {
        case 1:
            printf("the ans is: %d\n",a+b);
            break;

            case 2:
            printf("the ans is: %d\n",a-b);
            break;

            case 3 :
            printf("the ans is:%d\n",a*b);
            break;

            case 4:
            printf("the ans is: %d\n",a/b);
            break;
        
        default:
        printf("invalid choice!!!");
            break;

            printf("\n");
        }

    } while (i!=0);
    
}