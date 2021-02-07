#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no;
    srand(time(0));
    int num=rand()%100+1; //to get random no. between 1 to 100
    int i=1;

    printf("GUESS THE NO. BETWEEN 1 TO 100\n");
    scanf("%d",&no);
    while(no!=num)
    {
       if(no<num)
                printf("ENTER BIGGER NO.\n");
       else if(no>num)
               printf("ENTER LESSER NO: \n");

       scanf("%d",&no);
       i++;

    }
    printf("\nCORRECT NO IN ATTEMPTS %d",i);
    return 0;
}
