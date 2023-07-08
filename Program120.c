// Pattern Printing
//      Input - Row : 5  ,   Col : 5
//      Output -
//                  #   #    #   #    #
//                  *   *    *   *    *
//                  #   #    #   #    #
//                  *   *    *   *    *
//                  #   #    #   #    #

#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char Arr[2] = { '#', '*'};

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%c\t",Arr[(i%2 !=0)]);
        }
        printf("\n");
    }    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d", &iValue1);

    printf("Enter Number of columns : \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}