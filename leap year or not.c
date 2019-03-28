include <stdio.h>

int main()
{
    int year;
    printf("enter year:");
    scanf("%d",&year);
    if(year%4 == 0)
    {
        if(year%100 == 0)
        {
            if(year% 400== 0)
            {
                printf("leap year");
            }
            else
            {
                printf("no");
            }
        }
        else
        {
            printf("leap year");
        }
    }
    else
    {
        printf("no");
    }


    return 0;
}
